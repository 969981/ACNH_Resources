
void FUN_007d06b0(int *param_1,undefined8 *param_2,byte *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  undefined4 local_58;
  byte local_54;
  int local_50;
  undefined4 uStack_4c;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined2 local_38;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  *(undefined2 *)((long)param_2 + 0x104) = 0x100;
  iVar5 = 1;
  if (*(uint *)(param_2 + 0x21) < 0xfffffffe) {
    iVar5 = *(uint *)(param_2 + 0x21) + 1;
  }
  *(int *)(param_2 + 0x21) = iVar5;
  *(int *)(param_2 + 0x20) = iVar5;
  *(int *)((long)param_2 + 0x10c) = iVar5;
  if (*(char *)((long)param_2 + 0x114) != '\0') {
    *(undefined1 *)((long)param_2 + 0x114) = 0;
  }
  if (((DAT_0537d558 == (long *)0x0) || ((int)DAT_0537d558[0x10] != 3)) ||
     (*(byte *)(*DAT_0537d558 + 0x476) < 2)) {
    *param_1 = iVar5;
    *(undefined2 *)((long)param_2 + 0x104) = 1;
  }
  else {
    local_54 = *param_3;
    uVar6 = (ulong)local_54;
    if ((uVar6 < 8) && (local_50 = *(int *)(param_2 + uVar6 * 4), local_50 != 0)) {
      local_38 = 0xfffe;
      local_18 = 0;
      local_48 = PTR_DAT_04bb2010 + 0x10;
      local_12 = 0;
      local_40 = *(undefined4 *)(param_2 + uVar6 * 4 + 2);
      uStack_3c = *(undefined4 *)((long)param_2 + uVar6 * 0x20 + 0x14);
      uStack_4c = *(undefined4 *)((long)param_2 + uVar6 * 0x20 + 4);
      local_58 = 3;
      local_14 = 0xff00;
      if (-1 < DAT_04cadf30) {
        FUN_01db1df0(*DAT_0537d558 + 0x480,DAT_04cadf30,&local_18,&local_58,0x28,0);
        uVar6 = (ulong)*param_3;
      }
      cVar4 = (char)uVar6;
      bVar3 = 7 < (uint)uVar6;
      if (bVar3) {
        cVar4 = -1;
      }
      puVar1 = param_2 + ((long)cVar4 & 0xffffffffU) * 4;
      if (bVar3) {
        puVar1 = param_2;
      }
      *puVar1 = 0;
      puVar1[2] = 0;
      uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      *(undefined4 *)(puVar1 + 3) = *(undefined4 *)PTR_DAT_04bb37e0;
      *(undefined4 *)((long)puVar1 + 0x1c) = uVar2;
      if (*(int *)((long)param_2 + 0x10c) == *(int *)(param_2 + 0x20)) {
        *(undefined2 *)((long)param_2 + 0x104) = 1;
      }
      *param_1 = *(int *)((long)param_2 + 0x10c);
    }
    else {
      *(undefined2 *)((long)param_2 + 0x104) = 0;
      *param_1 = iVar5;
    }
  }
  return;
}

