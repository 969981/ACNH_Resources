
void FUN_01ee0790(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined *puVar8;
  long lVar9;
  undefined *local_68;
  undefined8 *puStack_60;
  undefined *local_58;
  float local_50;
  undefined4 uStack_4c;
  long local_48;
  uint local_24;
  
  if (*(int *)(param_1 + 0xaa00) == 3) {
    lVar9 = *(long *)(param_1 + 0x10);
    if ((*(int *)(lVar9 + 0x360) == 4 && *(int *)(lVar9 + 0x4b8) != 0) &&
       (*(int *)(lVar9 + 0x378) == 0x23)) {
      if ((*(byte *)(param_1 + 0xad5d) >> 3 & 1) == 0) {
        local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
        local_24 = 0;
        local_50 = (float)*(int *)(param_1 + 0x781c) * 5.0 + 2.5;
        local_58 = (undefined *)(ulong)(uint)((float)*(int *)(param_1 + 0x7818) * 5.0 + 2.5);
        FUN_01e5a930(0x40000000,lVar9,0x18,&local_58,&local_68,&local_24,PTR_DAT_04bc1600,6);
        *(undefined2 *)(lVar9 + 0x408) = *(undefined2 *)(param_1 + 0x7840);
        *(undefined1 *)(lVar9 + 0x40a) = *(undefined1 *)(param_1 + 0x7842);
        *(undefined1 *)(lVar9 + 0x40b) = *(undefined1 *)(param_1 + 0x7843);
        *(undefined4 *)(lVar9 + 0x40c) = *(undefined4 *)(param_1 + 0x7844);
        uVar1 = *(undefined4 *)(param_1 + 0x787c);
        *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x630) = uVar1;
        *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x634) = *(undefined1 *)(param_1 + 0x7868);
        if ((*(long *)(param_1 + 8) != 0) &&
           (uVar5 = *(uint *)(*(long *)(param_1 + 8) + 0x508), uVar5 != 0xffffffff)) {
          puVar8 = &DAT_053fe348 + (ulong)uVar5 * 0xba0;
          if (9 < uVar5) {
            puVar8 = &DAT_053fe348;
          }
          *(undefined4 *)(puVar8 + 0x8a0) = uVar1;
          puVar8[0x8a4] = *(undefined1 *)(param_1 + 0x7868);
        }
      }
    }
    else {
      local_58 = (undefined *)CONCAT44(local_58._4_4_,0x18);
      if ((*(int *)(lVar9 + 0x360) == 0x18 && *(int *)(lVar9 + 0x4b8) != 0) &&
         ((*(int *)(lVar9 + 0x378) == 0x23 &&
          (*(undefined1 *)(param_1 + 0x7878) = 1, *(int *)(*(long *)(param_1 + 8) + 0x750) == 3))))
      {
        FUN_0212eca8(param_1 + 0xaa50,1,0);
        return;
      }
    }
  }
  else {
    FUN_020d1018(param_1 + 0x8998);
    if ((*(byte *)(param_1 + 0xaa44) >> 5 & 1) != 0) {
      piVar7 = *(int **)PTR_DAT_04bb47d0;
      if ((piVar7 != (int *)0x0) &&
         ((*piVar7 != 0 || piVar7[2] != 0) && *piVar7 == *(int *)(param_1 + 0x89a0))) {
        *(undefined1 *)(piVar7 + 0x2c) = 1;
      }
      uVar1 = DAT_053e0cf4;
      uVar3 = DAT_053e0cec;
      uVar2 = DAT_053e0ce4;
      *(undefined4 *)(param_1 + 0xaa18) = DAT_053e0cf8;
      *(undefined8 *)(param_1 + 0xaa04) = uVar2;
      *(undefined8 *)(param_1 + 0xaa0c) = uVar3;
      uVar4 = DAT_053e0cfc;
      *(undefined8 *)(param_1 + 0xa9f8) = 0;
      *(undefined8 *)(param_1 + 0xa9f0) = 0;
      *(undefined4 *)(param_1 + 0xaa14) = uVar1;
      *(undefined4 *)(param_1 + 0xaa1c) = uVar4;
      uVar1 = DAT_053e0d00;
      *(undefined1 *)(param_1 + 0xaa44) = 0;
      *(undefined4 *)(param_1 + 0xaa00) = 3;
      *(undefined4 *)(param_1 + 0xaa20) = uVar1;
      FUN_02085a50(*(undefined8 *)(param_1 + 0x18),0,0);
      puVar8 = PTR_DAT_04bb43c0;
      local_48 = 0;
      local_58 = PTR_DAT_04bc0510 + 0x10;
      local_50 = *(float *)(param_1 + 0x7840);
      uStack_4c = *(undefined4 *)(param_1 + 0x7844);
      lVar9 = *(long *)PTR_DAT_04bb43c0;
      uVar5 = FUN_0277d6c4(&local_50);
      if (*(long *)puVar8 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4((float *)(param_1 + 0x7840));
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
             (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8), lVar9 != 0)) {
            local_48 = lVar9;
          }
        }
      }
      iVar6 = FUN_01ae98d0(&local_58);
      local_24 = (uint)(long)((float)iVar6 * 90.0 * 11930465.0);
      if (*(char *)(param_1 + 0x789c) != '\0') {
        local_24 = local_24 ^ 0x80000000;
      }
      local_68 = PTR_DAT_04bb2020 + 0x10;
      puStack_60 = &DAT_0407ebb1;
      FUN_01e5ab70(*(undefined8 *)(param_1 + 0x10),&local_24,PTR_DAT_04bb65b0,&local_68,6);
    }
  }
  return;
}

