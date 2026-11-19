
undefined8 FUN_0399d9c0(long *param_1)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x18))(param_1);
  if ((undefined1 *)param_1[1] != &DAT_040c7b86) {
    uVar3 = 0;
    bVar2 = true;
    do {
      cVar1 = ((undefined1 *)param_1[1])[uVar3];
      if (cVar1 != (&DAT_040c7b86)[uVar3]) break;
      if (cVar1 == '\0') {
        if (bVar2) {
          return 0;
        }
        break;
      }
      bVar2 = uVar3 < 0x80000;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x80001);
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    if ((char *)param_1[1] == "field_ground") {
      return 1;
    }
    uVar3 = 0;
    bVar2 = true;
    do {
      cVar1 = ((char *)param_1[1])[uVar3];
      if (cVar1 != "field_ground"[uVar3]) break;
      if (cVar1 == '\0') {
        if (bVar2) {
          return 1;
        }
        break;
      }
      bVar2 = uVar3 < 0x80000;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x80001);
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    if ((char *)param_1[1] == "field_wall") {
      return 2;
    }
    uVar3 = 0;
    bVar2 = true;
    do {
      cVar1 = ((char *)param_1[1])[uVar3];
      if (cVar1 != "field_wall"[uVar3]) break;
      if (cVar1 == '\0') {
        if (bVar2) {
          return 2;
        }
        break;
      }
      bVar2 = uVar3 < 0x80000;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x80001);
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    if ((undefined1 *)param_1[1] == &DAT_040e171d) {
      return 3;
    }
    uVar3 = 0;
    bVar2 = true;
    do {
      cVar1 = ((undefined1 *)param_1[1])[uVar3];
      if (cVar1 != (&DAT_040e171d)[uVar3]) break;
      if (cVar1 == '\0') {
        if (bVar2) {
          return 3;
        }
        break;
      }
      bVar2 = uVar3 < 0x80000;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x80001);
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    if ((char *)param_1[1] == "player") {
      return 4;
    }
    uVar3 = 0;
    bVar2 = true;
    do {
      cVar1 = ((char *)param_1[1])[uVar3];
      if (cVar1 != "player"[uVar3]) break;
      if (cVar1 == '\0') {
        if (bVar2) {
          return 4;
        }
        break;
      }
      bVar2 = uVar3 < 0x80000;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x80001);
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    if ((undefined1 *)param_1[1] == &DAT_04080da9) {
      return 5;
    }
    uVar3 = 0;
    bVar2 = true;
    do {
      cVar1 = ((undefined1 *)param_1[1])[uVar3];
      if (cVar1 != (&DAT_04080da9)[uVar3]) break;
      if (cVar1 == '\0') {
        if (bVar2) {
          return 5;
        }
        break;
      }
      bVar2 = uVar3 < 0x80000;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x80001);
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    if ((char *)param_1[1] == "object") {
      return 6;
    }
    uVar3 = 0;
    bVar2 = true;
    do {
      cVar1 = ((char *)param_1[1])[uVar3];
      if (cVar1 != "object"[uVar3]) break;
      if (cVar1 == '\0') {
        if (bVar2) {
          return 6;
        }
        break;
      }
      bVar2 = uVar3 < 0x80000;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x80001);
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    if ((char *)param_1[1] == "effect") {
      return 7;
    }
    uVar3 = 0;
    bVar2 = true;
    do {
      cVar1 = ((char *)param_1[1])[uVar3];
      if (cVar1 != "effect"[uVar3]) {
        return 0;
      }
      if (cVar1 == '\0') {
        if (bVar2) {
          return 7;
        }
        return 0;
      }
      bVar2 = uVar3 < 0x80000;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x80001);
  }
  return 0;
}

