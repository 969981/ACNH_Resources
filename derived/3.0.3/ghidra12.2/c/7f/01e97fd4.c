
void FUN_01e97fd4(long param_1,undefined4 *param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  undefined *local_68;
  undefined1 *puStack_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  puVar3 = PTR_DAT_04bb43c0;
  local_48 = 0;
  local_58 = PTR_DAT_04bc0510 + 0x10;
  local_50 = *param_2;
  uStack_4c = param_2[1];
  lVar4 = *(long *)PTR_DAT_04bb43c0;
  uVar1 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar3 != 0) {
    lVar4 = *(long *)(lVar4 + 0x57e58);
    uVar1 = (uVar1 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
    if ((uVar1 < *(uint *)(lVar4 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar1 * 8) != 0)) {
      lVar4 = *(long *)PTR_DAT_04bc0428;
      uVar1 = FUN_0277d6c4(param_2);
      uVar1 = (uVar1 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar1 < *(uint *)(lVar4 + 0x1d8)) &&
         (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar1 * 8), lVar4 != 0)) {
        local_48 = lVar4;
      }
    }
  }
  *(undefined2 *)(param_1 + 0x7840) = *(undefined2 *)param_2;
  *(undefined1 *)(param_1 + 0x7842) = *(undefined1 *)((long)param_2 + 2);
  *(undefined1 *)(param_1 + 0x7843) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(param_1 + 0x7844) = param_2[1];
  iVar5 = *(int *)(param_3 + 0x20);
  iVar6 = *(int *)(param_3 + 0x10);
  *(float *)(param_1 + 0x7838) =
       ((float)*(int *)(param_3 + 0x14) * 5.0 + (float)*(int *)(param_3 + 0x24) * 5.0 + 5.0) * 0.5;
  *(float *)(param_1 + 0x7830) = ((float)iVar6 * 5.0 + (float)iVar5 * 5.0 + 5.0) * 0.5;
  FUN_01afb480(&local_58,param_1 + 0x7808);
  *(int *)(param_1 + 0x7818) = *(int *)(param_1 + 0x7818) + *(int *)(param_3 + 0x10);
  *(int *)(param_1 + 0x781c) = *(int *)(param_1 + 0x781c) + *(int *)(param_3 + 0x14);
  *(int *)(param_1 + 0x7828) = *(int *)(param_1 + 0x7828) + *(int *)(param_3 + 0x10);
  puVar3 = PTR_DAT_04bb3968;
  *(int *)(param_1 + 0x782c) = *(int *)(param_1 + 0x782c) + *(int *)(param_3 + 0x14);
  local_68 = PTR_DAT_04bb2020 + 0x10;
  puStack_60 = &DAT_040cec26;
  uVar2 = FUN_020a4f40(*(undefined8 *)puVar3,&local_68,PTR_DAT_04bb3238,1);
  *(undefined4 *)(param_1 + 0x7800) = uVar2;
  FUN_02085e20(*(undefined8 *)(param_1 + 0x18),0,uVar2,PTR_DAT_04bb6928,0);
  if ((*(long *)(param_1 + 8) != 0) &&
     (uVar1 = *(uint *)(*(long *)(param_1 + 8) + 0x508), uVar1 != 0xffffffff)) {
    puVar3 = &DAT_053fe348 + (ulong)uVar1 * 0xba0;
    if (9 < uVar1) {
      puVar3 = &DAT_053fe348;
    }
    *(undefined4 *)(param_1 + 0x7880) = *(undefined4 *)(puVar3 + 0x8a0);
  }
  return;
}

