.navbar {
  padding: 20px;
}
.navbar .container {
  display: flex;
  justify-content: space-between;
  align-items: center;
}
.navbar__logo {
  font-weight: 800;
  color: var(--minColor);
  text-transform: uppercase;
}
.navbar__logo::first-letter {
  color: #041622;
}
.navbar__links-wrapper {
  position: relative;
}
.navbar__links-wrapper:hover .navbar__links-icon-item {
  width: 100%;
}
.navbar__links-wrapper:hover .navbar__links-globle {
  display: block;
}
.navbar__links-globle {
  display: none;
  list-style: none;
  position: absolute;
  padding: 0;
  margin: 0;
  right: -30px;
  top: calc(100% + 10px);
  background-color: #041622;
  min-width: 160px;
  border-radius: 20px;
  z-index: 1;
}
.navbar__links-globle:before {
  content: "";
  position: absolute;
  border-color: transparent transparent #041622 transparent;
  border-width: 10px;
  border-style: solid;
  right: 35px;
  top: -20px;
}
.navbar__links-globle-item {
  padding: 20px;
}
.navbar__links-globle-item:not(:last-child) {
  border-bottom: 1px solid rgba(83, 82, 82, 0.8);
}
.navbar__links-globle-item a {
  text-decoration: none;
  color: #eef3f7;
}
.navbar__links-globle-item a:hover {
  padding-left: 25px;
}
.navbar__links-icon {
  width: 30px;
  display: flex;
  justify-content: end;
  flex-wrap: wrap;
}
.navbar__links-icon-item {
  background-color: white;
  height: 2px;
  margin-bottom: 5px;
}
.navbar__links-icon-item:first-child, .navbar__links-icon-item:last-child {
  width: 100%;
  height: 2px;
}
.navbar__links-icon-item:nth-child(2) {
  width: 60%;
  height: 2px;
  transition: 0.3s;
}

.banner {
  position: absolute;
  top: 30%;
  left: 50%;
  text-align: center;
  transform: translate(-50%, -50%);
}
.banner__title {
  margin: 0;
  text-transform: uppercase;
  font-weight: bold;
  font-size: 60px;
  color: var(--minColor);
  padding-bottom: 10px;
}
@media only screen and (max-width: 767px) {
  .banner__title {
    font-size: 35px;
  }
}
.banner__description {
  font-size: 18px;
  line-height: 1.7;
  font-weight: 300;
  color: #ccc;
  margin: auto;
  width: 300px;
}
@media only screen and (max-width: 767px) {
  .banner {
    top: 30%;
    width: 300px;
  }
}

header {
  background-image: url(../images/header.jpg);
  height: 100vh;
  background-size: cover;
  position: relative;
}

/* start feature */
.feature {
  padding-top: var(--minPadding);
  padding-bottom: var(--minPadding);
}
.feature__item {
  padding: 20px;
  text-align: center;
}
.feature__item-title {
  font-size: 20px;
  font-weight: 800;
  margin: 20px 0;
  color: var(--min-color-heading);
}
.feature__item-description {
  color: #f0f0f0;
  font-size: 16px;
  font-weight: 400;
}

.feature .container {
  display: grid;
  grid-template-columns: repeat(auto-fill, minmax(300px, 1fr));
  gap: 10px;
}

.service {
  padding-top: var(--minPadding);
  padding-bottom: var(--minPadding);
  border-top: var(--border-color) solid 1px;
}
.service__content {
  display: grid;
  grid-template-columns: repeat(auto-fill, minmax(400px, 2fr));
  margin-top: 40px;
  gap: 50px;
  color: #fff;
}
@media (max-width: 767px) {
  .service__content {
    gap: 20px;
    grid-template-columns: repeat(auto-fill, minmax(200px, 1fr));
  }
}
.service__item {
  margin-bottom: 40px;
  display: flex;
}
.service__item-content {
  flex: 1;
}
.service__item i {
  flex-basis: 60px;
}
.service__item-title {
  margin: 0 0 10px;
  color: var(--min-color-heading);
}
.service__item-description {
  color: #f0f0f0;
  font-weight: 300;
  line-height: 1.6;
}
@media only screen and (max-width: 767px) {
  .service__item {
    flex-direction: column;
    text-align: center;
  }
}

.about {
  padding-top: var(--minPadding);
  padding-bottom: var(--minPadding);
  border-top: var(--border-color) solid 1px;
}
.about__content {
  display: flex;
  justify-content: space-between;
  align-items: center;
  flex-wrap: wrap;
  margin-top: 30px;
}
@media only screen and (max-width: 1024px) {
  .about__content {
    flex-direction: column;
    text-align: center;
  }
}
.about__item-image {
  width: 350px;
  height: 300px;
}
.about__item-image img {
  width: 100%;
  object-fit: cover;
  height: 100%;
}
.about__item-description {
  flex-basis: calc(100% - 400px);
}
.about__item-description p {
  text-align: left;
  font-weight: bold;
  line-height: 2;
  color: #c9c3c3;
}

/* end about */
/* start photos */
.photos {
  padding-top: var(--minPadding);
  padding-bottom: var(--minPadding);
  border-top: var(--border-color) solid 1px;
}
.photos__content {
  display: grid;
  grid-template-columns: repeat(auto-fill, minmax(300px, 1fr));
  gap: 40px;
  margin-top: 30px;
}
@media (max-width: 767px) {
  .photos__content {
    gap: 50px;
  }
}
.photos__card {
  max-width: 400px;
  margin: auto;
}
.photos__card-content {
  text-align: center;
  margin: 10px 0;
}
.photos__card-info {
  text-align: center;
  margin-top: 20px;
  color: #5f5e5e;
}
@media (max-width: 767px) {
  .photos__card-info {
    margin: 20px 0;
  }
}
.photos__card-title {
  font-weight: 700;
  color: var(--min-color-heading);
}
.photos__card-description {
  color: var(--des-color);
  padding-top: 10px;
}
.photos__card img {
  width: 100%;
  height: 200px;
  object-fit: cover;
}
.photos__card-scale {
  transform: scale(1.1);
  margin-bottom: 8px;
}
@media only screen and (max-width: 1200px) {
  .photos__card-scale {
    transform: unset;
    margin-bottom: 0;
  }
}

img {
  border-radius: 20px;
  background-color: transparent;
  border-radius: 20px;
}

/* start contact */
.contact {
  border-top: 1px solid var(--border-color);
  padding-bottom: var(--minPadding);
  padding-top: var(--minPadding);
}
.contact__content {
  color: #ccc;
  text-align: center;
}
.contact__lable {
  font-size: 35px;
  font-weight: bold;
  color: rgb(240, 239, 239);
  padding: 10px 0;
}
@media (max-width: 767px) {
  .contact__lable {
    font-size: 25px;
  }
}
.contact__link {
  text-decoration: none;
  display: block;
  color: #a7a2a2;
  padding: 10px 0;
  font-size: 30px;
  font-weight: bold;
}
@media (max-width: 767px) {
  .contact__link {
    font-size: 20px;
  }
}
.contact__social {
  display: flex;
  justify-content: center;
  margin: 20px 0;
}
.contact__social i {
  margin-left: 10px;
  font-size: 20px;
}

/* end contact */
/* start footer */
.footer {
  font-size: 15px;
  align-items: center;
  padding: 10px 0;
  text-align: center;
  color: #c9c3c3;
  padding: 10px 0;
  border-top: var(--border-color) solid 1px;
}

.footer span {
  font-weight: bold;
  color: #eee;
}

:root {
  --minColor: #eee;
  --minBackground-color: rgb(0, 0, 0);
  --minPadding: 60px;
  --secondry-color: #eeeeee88;
  --min-color-heading: #eee;
  --icon-color: rgb(255, 69, 193);
  --border-color: hsla(0, 1%, 26%, 0.404);
  --des-color: #797f91;
  --min-background:
    to bottom,
    linear-gradient(#03070a, #041622);
  --min-background-image: linear-gradient(#f08192, #2c38a3);
  --phon-padding: 30px;
}

:root {
  --minColor: #eee;
  --minBackground-color: rgb(0, 0, 0);
  --minPadding: 60px;
  --secondry-color: #eeeeee88;
  --min-color-heading: #eee;
  --icon-color: rgb(255, 69, 193);
  --border-color: hsla(0, 1%, 26%, 0.404);
  --des-color: #797f91;
  --min-background:
    to bottom,
    linear-gradient(#03070a, #041622);
  --min-background-image: linear-gradient(#f08192, #2c38a3);
  --phon-padding: 30px;
}

i {
  background: linear-gradient(to right, #f16fb2, #7e44f3);
  color: transparent;
  background-clip: text;
  -webkit-background-clip: text;
  font-size: 40px;
}

body {
  font-family: "Work Sans", sans-serif;
  background-image: linear-gradient(#03070a, #041622);
}

@media (max-width: 767px) {
  .service,
  .photos,
  .contact,
  .about,
  .feature {
    padding-top: var(--phon-padding);
    padding-bottom: var(--phon-padding);
  }
}
.section-heading {
  font-size: 80px;
  font-weight: bold;
  text-align: center;
  color: transparent;
  background: linear-gradient(to right, #f16fb2, #7e44f3);
  background-clip: text;
  -webkit-background-clip: text;
  margin: 0;
}
@media only screen and (max-width: 767px) {
  .section-heading {
    font-size: 60px;
  }
}
.section-heading + p {
  color: #eee;
  text-align: center;
  margin-top: -10px;
  margin-bottom: 0;
}

.container {
  padding-left: 20px;
  padding-right: 20px;
  margin-left: auto;
  margin-right: auto;
  max-width: 1024px;
}
@media only screen and (min-width: 768px) {
  .container {
    width: 750px;
  }
}
@media only screen and (min-width: 992px) {
  .container {
    width: 970px;
  }
}
@media only screen and (min-width: 1200px) {
  .container {
    width: 1170px;
  }
}

::selection {
  color: var(--minBackground-color);
  background-color: var(--minColor);
}

* {
  margin: 0;
  padding: 0;
  -webkit-box-sizing: border-box;
  -moz-box-sizing: border-box;
  box-sizing: border-box;
}

/*# sourceMappingURL=style.cc.map */
