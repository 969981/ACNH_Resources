
void FUN_011c8b20(long param_1,uint param_2,uint param_3)

{
  bool bVar1;
  long lVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  undefined8 *puVar7;
  
  lVar2 = param_1 + 0x278;
  lVar4 = lVar2 + (ulong)param_2 * 0x120;
  if (999 < param_2) {
    lVar4 = lVar2;
  }
  if (*(int *)(lVar4 + 0xfc) != 4) {
    puVar3 = (uint *)(param_1 + 0x46790);
    bVar6 = *(byte *)(lVar4 + 0x11a);
    uVar5 = *puVar3;
    if ((long)(char)bVar6 != 0xffffffffffffffff) {
      puVar7 = &DAT_050d8988 + ((long)(char)bVar6 & 0xffffffffU) * 5;
      if (0x77 < bVar6) {
        puVar7 = &DAT_050d8988;
      }
      *(undefined4 *)(puVar7 + 4) = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *puVar7 = 0;
      puVar7[1] = 0;
      *(undefined1 *)(lVar4 + 0x11a) = 0xff;
    }
    if (*(char *)(lVar4 + 0x114) != -1) {
      FUN_012547e0();
      *(undefined1 *)(lVar4 + 0x114) = 0xff;
    }
    if (*(int *)(lVar4 + 0xfc) == 2) {
      *(undefined4 *)(lVar4 + 0xfc) = 4;
      if ((*(byte *)(lVar4 + 0x10b) >> 4 & 1) == 0) {
        FUN_011cf0c0(lVar4,lVar2,uVar5,0,param_3 & 1);
      }
    }
    FUN_011cc6d8(lVar4);
    if (*puVar3 == param_2) {
      if (0 < (int)param_2) {
        do {
          lVar4 = lVar2 + (ulong)param_2 * 0x120;
          if (999 < param_2) {
            lVar4 = lVar2;
          }
          if (*(int *)(lVar4 + 0xfc) != 4) {
            param_2 = param_2 + 1;
            goto LAB_011c8c3c;
          }
          uVar5 = param_2 - 1;
          bVar1 = 0 < (int)param_2;
          param_2 = uVar5;
        } while (uVar5 != 0 && bVar1);
      }
      param_2 = 0;
LAB_011c8c3c:
      *puVar3 = param_2;
    }
  }
  return;
}

