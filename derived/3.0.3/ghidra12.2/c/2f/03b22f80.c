
void FUN_03b22f80(undefined8 *param_1,long param_2,undefined8 param_3)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  
  *param_1 = &PTR_LAB_04b73f78;
  param_1[1] = param_1 + 1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0x408000003e4ccccd;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x8c) = 0x3f66666600000000;
  param_1[0xb] = 0;
  *(undefined8 *)((long)param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x9c) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xa2) = 1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined2 *)((long)param_1 + 0xa7) = 0xaff;
  param_1[0xf] = 0;
  *(undefined1 *)((long)param_1 + 0xa9) = 2;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((long)param_1 + 0xa3) = 0;
  param_1[0x16] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[4] = param_3;
  param_1[5] = param_2;
  param_1[2] = param_1 + 1;
  param_1[3] = param_2 + 0xb0;
  lVar5 = FUN_0037e610(param_2,"SlideListOn");
  pcVar1 = (char *)(lVar5 + (ulong)*(uint *)(lVar5 + 4));
  if (pcVar1 == "Vertical") {
LAB_03b23090:
    bVar2 = *(byte *)((long)param_1 + 0xa5) | 2;
  }
  else {
    uVar6 = 0;
    bVar4 = true;
    do {
      cVar3 = pcVar1[uVar6];
      if (cVar3 != "Vertical"[uVar6]) break;
      if (cVar3 == '\0') {
        if (bVar4) goto LAB_03b23090;
        break;
      }
      bVar4 = uVar6 < 0x80000;
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0x80001);
    bVar2 = *(byte *)((long)param_1 + 0xa5) & 0xfd;
  }
  *(byte *)((long)param_1 + 0xa5) = bVar2;
  lVar5 = FUN_0037e610(param_2,"SlideListCenteringBorder");
  if (lVar5 != 0) {
    *(byte *)((long)param_1 + 0xa5) = *(byte *)((long)param_1 + 0xa5) | 0x10;
  }
  lVar5 = FUN_0037e610(param_2,"SlideListCenteringPage");
  bVar2 = *(byte *)((long)param_1 + 0xa5);
  if (lVar5 != 0) {
    bVar2 = *(byte *)((long)param_1 + 0xa5) | 0x80;
  }
  *(byte *)((long)param_1 + 0xa5) = bVar2 | 0x20;
  return;
}

