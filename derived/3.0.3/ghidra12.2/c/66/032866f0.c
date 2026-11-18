
ulong FUN_032866f0(undefined8 *param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *local_30;
  char *local_28;
  
  local_30 = PTR_DAT_04bc8e68 + 0x10;
  local_28 = PTR_DAT_04bb2120;
  if ((char *)*param_1 != (char *)0x0) {
    local_28 = (char *)*param_1;
  }
  if (local_28 == "ButtonNormal") {
LAB_03286774:
    uVar3 = 0x100000000;
    uVar2 = 1;
  }
  else {
    uVar3 = 0;
    bVar1 = true;
    do {
      if (local_28[uVar3] != "ButtonNormal"[uVar3]) break;
      if (local_28[uVar3] == '\0') {
        if (bVar1) goto LAB_03286774;
        break;
      }
      bVar1 = uVar3 < 0x80000;
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x80001);
    if (local_28 == "ButtonCheck") {
LAB_032867d0:
      uVar3 = 0x200000000;
      uVar2 = 1;
    }
    else {
      uVar3 = 0;
      bVar1 = true;
      do {
        if (local_28[uVar3] != "ButtonCheck"[uVar3]) break;
        if (local_28[uVar3] == '\0') {
          if (bVar1) goto LAB_032867d0;
          break;
        }
        bVar1 = uVar3 < 0x80000;
        uVar3 = uVar3 + 1;
      } while (uVar3 != 0x80001);
      if (local_28 == "ButtonFocusActive") {
LAB_03286824:
        uVar3 = 0x400000000;
        uVar2 = 1;
      }
      else {
        uVar3 = 0;
        bVar1 = true;
        do {
          if (local_28[uVar3] != "ButtonFocusActive"[uVar3]) break;
          if (local_28[uVar3] == '\0') {
            if (bVar1) goto LAB_03286824;
            break;
          }
          bVar1 = uVar3 < 0x80000;
          uVar3 = uVar3 + 1;
        } while (uVar3 != 0x80001);
        if (local_28 == "ButtonRepeat") {
LAB_03286880:
          uVar3 = 0x300000000;
          uVar2 = 1;
        }
        else {
          uVar3 = 0;
          bVar1 = true;
          do {
            if (local_28[uVar3] != "ButtonRepeat"[uVar3]) break;
            if (local_28[uVar3] == '\0') {
              if (bVar1) goto LAB_03286880;
              break;
            }
            bVar1 = uVar3 < 0x80000;
            uVar3 = uVar3 + 1;
          } while (uVar3 != 0x80001);
          FUN_006bd3a4(&local_30);
          if (local_28 == "ButtonSelBox") {
LAB_032868e0:
            uVar3 = 0x500000000;
            uVar2 = 1;
          }
          else {
            uVar3 = 0;
            bVar1 = true;
            do {
              if (local_28[uVar3] != "ButtonSelBox"[uVar3]) break;
              if (local_28[uVar3] == '\0') {
                if (bVar1) goto LAB_032868e0;
                break;
              }
              bVar1 = uVar3 < 0x80000;
              uVar3 = uVar3 + 1;
            } while (uVar3 != 0x80001);
            uVar2 = 0;
            uVar3 = 0xffffffff00000000;
          }
        }
      }
    }
  }
  return uVar3 | uVar2;
}

