
void FUN_0385bef0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  ulong uVar6;
  undefined *local_58;
  char *pcStack_50;
  undefined *local_48;
  char *pcStack_40;
  long local_38;
  
  FUN_03d5d990();
  FUN_03d5e1e0(param_1);
  FUN_03d6627c(param_1,param_2,param_3);
  *(uint *)(param_1 + 0x284) = *(uint *)(param_1 + 0x284) & 0xffffff7f;
  puVar4 = PTR_DAT_04bb2020;
  local_38 = 0;
  local_48 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "UISysBoundingUseCursor";
  uVar6 = FUN_0386fa90(param_1,&local_48,&local_38);
  if (((uVar6 & 1) != 0) && (local_38 != 0)) {
    puVar1 = (undefined1 *)(local_38 + (ulong)*(uint *)(local_38 + 4));
    if (puVar1 == &DAT_040a395f) {
LAB_0385bfd0:
      local_58 = puVar4 + 0x10;
      pcStack_40 = "*Hit";
      pcStack_50 = "*Cursor";
      local_48 = local_58;
      FUN_03d5d740(param_1,param_2,param_3,&local_48,&local_58);
      FUN_03d49da4(*(undefined8 *)(param_1 + 0x218),0,4);
      FUN_03d49da4(*(undefined8 *)(param_1 + 0x218),1,4);
      FUN_03d49da4(*(undefined8 *)(param_1 + 0x218),2,4);
      FUN_03d49da4(*(undefined8 *)(param_1 + 0x218),3,4);
      *(uint *)(param_1 + 0x284) = *(uint *)(param_1 + 0x284) | 0x80;
    }
    else {
      uVar6 = 0;
      bVar5 = true;
      do {
        cVar2 = puVar1[uVar6];
        if (cVar2 != (&DAT_040a395f)[uVar6]) break;
        if (cVar2 == '\0') {
          if (bVar5) goto LAB_0385bfd0;
          break;
        }
        bVar5 = uVar6 < 0x80000;
        uVar6 = uVar6 + 1;
      } while (uVar6 != 0x80001);
    }
  }
  uVar3 = *(uint *)(param_1 + 0x284) & 0xffffff80 | 1;
  *(uint *)(param_1 + 0x284) = uVar3;
  *(uint *)(param_1 + 0x288) = uVar3;
  *(undefined4 *)(*(long *)(param_1 + 0x248) + 4) = 0;
  **(undefined4 **)(param_1 + 0x248) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x28c) = 0x3d23d70a00000028;
  *(undefined4 *)(param_1 + 0x2cc) = 0x42c80000;
  return;
}

