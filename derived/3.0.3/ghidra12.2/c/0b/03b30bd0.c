
void FUN_03b30bd0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  bool bVar2;
  long lVar3;
  undefined1 uVar4;
  ulong uVar5;
  
  FUN_0037bc10();
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *param_1 = &PTR_LAB_04b75440;
  *(undefined1 *)((long)param_1 + 0xdc) = 0;
  *(undefined2 *)((long)param_1 + 0xdd) = 1;
  *(undefined1 *)((long)param_1 + 0xdf) = 0;
  param_1[0x1c] = 0xbf80000000000000;
  lVar3 = FUN_0037e610(param_1,"AlignOn");
  if (lVar3 == 0) {
    lVar3 = FUN_0037e610(param_1,"VerticalAlignOn");
    if (lVar3 == 0) goto LAB_03b30e38;
    *(byte *)((long)param_1 + 0xdf) = *(byte *)((long)param_1 + 0xdf) | 1;
    pcVar1 = (char *)(lVar3 + (ulong)*(uint *)(lVar3 + 4));
    if (pcVar1 == "Center") goto LAB_03b30d90;
    uVar5 = 0;
    bVar2 = true;
    do {
      if (pcVar1[uVar5] != "Center"[uVar5]) break;
      if (pcVar1[uVar5] == '\0') {
        if (bVar2) goto LAB_03b30d90;
        break;
      }
      bVar2 = uVar5 < 0x80000;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x80001);
    if (pcVar1 == "Top") goto LAB_03b30de0;
    uVar5 = 0;
    bVar2 = true;
    do {
      if (pcVar1[uVar5] != (&DAT_040bd576)[uVar5]) break;
      if (pcVar1[uVar5] == '\0') {
        if (bVar2) goto LAB_03b30de0;
        break;
      }
      bVar2 = uVar5 < 0x80000;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x80001);
    if (pcVar1 != "Bottom") {
      uVar5 = 0;
      bVar2 = true;
      do {
        if (pcVar1[uVar5] != "Bottom"[uVar5]) break;
        if (pcVar1[uVar5] == '\0') goto LAB_03b30e2c;
        bVar2 = uVar5 < 0x80000;
        uVar5 = uVar5 + 1;
      } while (uVar5 != 0x80001);
      goto LAB_03b30e38;
    }
    goto LAB_03b30e30;
  }
  pcVar1 = (char *)(lVar3 + (ulong)*(uint *)(lVar3 + 4));
  if (pcVar1 == "Center") {
LAB_03b30d90:
    uVar4 = 0;
  }
  else {
    uVar5 = 0;
    bVar2 = true;
    do {
      if (pcVar1[uVar5] != "Center"[uVar5]) break;
      if (pcVar1[uVar5] == '\0') {
        if (bVar2) goto LAB_03b30d90;
        break;
      }
      bVar2 = uVar5 < 0x80000;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x80001);
    if (pcVar1 != "Left") {
      uVar5 = 0;
      bVar2 = true;
      do {
        if (pcVar1[uVar5] != (&DAT_040e8d40)[uVar5]) break;
        if (pcVar1[uVar5] == '\0') {
          if (bVar2) goto LAB_03b30de0;
          break;
        }
        bVar2 = uVar5 < 0x80000;
        uVar5 = uVar5 + 1;
      } while (uVar5 != 0x80001);
      if (pcVar1 != "Right") {
        uVar5 = 0;
        bVar2 = true;
        do {
          if (pcVar1[uVar5] != "Right"[uVar5]) break;
          if (pcVar1[uVar5] == '\0') goto LAB_03b30e2c;
          bVar2 = uVar5 < 0x80000;
          uVar5 = uVar5 + 1;
        } while (uVar5 != 0x80001);
        goto LAB_03b30e38;
      }
      goto LAB_03b30e30;
    }
LAB_03b30de0:
    uVar4 = 1;
  }
  goto LAB_03b30e34;
LAB_03b30e2c:
  if (!bVar2) goto LAB_03b30e38;
LAB_03b30e30:
  uVar4 = 2;
LAB_03b30e34:
  *(undefined1 *)((long)param_1 + 0xdc) = uVar4;
LAB_03b30e38:
  lVar3 = FUN_0037e610(param_1,"AlignExtendEdge");
  if (lVar3 != 0) {
    *(undefined1 *)((long)param_1 + 0xde) = 1;
  }
  lVar3 = FUN_0037e610(param_1,"AlignDefaultMargin");
  if (lVar3 != 0) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(lVar3 + (ulong)*(uint *)(lVar3 + 4));
  }
  lVar3 = FUN_0037e610(param_1,"AlignCapture");
  if (lVar3 != 0) {
    *(byte *)((long)param_1 + 0xdf) = *(byte *)((long)param_1 + 0xdf) | 4;
  }
  lVar3 = *(long *)(*(long *)(param_3 + 0x20) + 0x88);
  if (lVar3 != 0) {
    *(byte *)(lVar3 + 0xe6) = *(byte *)(lVar3 + 0xe6) | 0x20;
  }
  return;
}

