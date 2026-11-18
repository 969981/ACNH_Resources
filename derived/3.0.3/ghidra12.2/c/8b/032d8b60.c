
undefined4 FUN_032d8b60(long *param_1,long *param_2)

{
  long *plVar1;
  ushort *puVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort uVar8;
  ushort *puVar9;
  undefined4 uVar10;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_40;
  
  FUN_00358b98(auStack_98);
  local_70 = FUN_0038a89c(*param_1);
  FUN_00350090(*(undefined4 *)(*param_1 + 0xf8),*(undefined4 *)(*param_1 + 0xfc),auStack_98);
  lVar4 = *param_1;
  local_40 = *(undefined8 *)(lVar4 + 0x108);
  uStack_54 = *(undefined4 *)(lVar4 + 0x100);
  local_58 = *(undefined4 *)(lVar4 + 0x104);
  local_68 = *(undefined8 *)(lVar4 + 0x148);
  local_5c = *(undefined4 *)(lVar4 + 0x50);
  plVar1 = *(long **)PTR_DAT_04bc9198;
  if (*(long **)(*(long *)PTR_DAT_04bc6338 + 0x88) != (long *)0x0) {
    plVar1 = *(long **)(*(long *)PTR_DAT_04bc6338 + 0x88);
  }
  lVar4 = (**(code **)(*plVar1 + 0x10))();
  *(undefined1 *)(lVar4 + 0x18) = 0;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar6 = (ushort *)param_2[1];
  uVar8 = *puVar6;
  if (uVar8 == 0) {
    iVar5 = 0;
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    iVar5 = 0;
    do {
      puVar7 = puVar6;
      puVar9 = puVar6;
      while ((uVar8 & 0xfffe) != 0xe) {
        puVar7 = puVar7 + 1;
        uVar8 = *puVar7;
        iVar3 = iVar3 + 1;
        puVar9 = puVar9 + 1;
        if (uVar8 == 0) goto LAB_032d8cb8;
      }
      if (uVar8 == 0xe) {
        puVar6 = (ushort *)((long)puVar9 + (ulong)puVar7[3] + 8);
      }
      else {
        puVar2 = puVar7;
        puVar6 = puVar9 + 3;
        if (uVar8 != 0xf) {
          puVar2 = (ushort *)0x0;
          puVar6 = puVar7;
        }
        puVar7 = puVar2;
      }
      iVar5 = iVar5 + ((uint)((int)puVar6 - (int)puVar9) >> 1 & 0xffff);
      if ((puVar7[1] == 0) && (puVar7[2] == 0)) {
        iVar3 = (uint)(puVar7[5] >> 1) + iVar3;
        iVar5 = iVar5 - (uint)(puVar7[5] >> 1);
      }
      uVar8 = *puVar6;
    } while (uVar8 != 0);
  }
LAB_032d8cb8:
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar10 = FUN_00358eb0(auStack_98,param_2[1],iVar3 + iVar5 & 0xffff);
  *(undefined1 *)(lVar4 + 0x18) = 0;
  thunk_FUN_0035008c(auStack_98);
  return uVar10;
}

