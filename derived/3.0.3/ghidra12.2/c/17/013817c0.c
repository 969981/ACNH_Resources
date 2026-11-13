
void FUN_013817c0(long param_1,long *param_2)

{
  size_t __size;
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  undefined *local_78;
  int local_70;
  int iStack_6c;
  undefined *local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  
  *(int *)(param_1 + 0x18) = (int)param_2[1];
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0xc);
  *(int *)(param_1 + 0x28) = (int)param_2[3];
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)((long)param_2 + 0x1c);
  iVar11 = 0;
  if ((char)param_2[5] != '\0') {
    iVar11 = *(int *)((long)param_2 + 0x44) * (int)param_2[8];
  }
  uVar3 = iVar11 + *(int *)((long)param_2 + 0xc) * (int)param_2[1];
  if (0 < (int)uVar3) {
    __size = (ulong)uVar3 * 0x68 + 8;
    lVar10 = *(long *)PTR_DAT_04bb2698;
    if (lVar10 == 0) {
      puVar6 = malloc(__size);
    }
    else {
      plVar4 = (long *)*param_2;
      if (plVar4 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar4 = (long *)(lVar10 + 8);
        if (lVar5 != 0) {
          plVar4 = (long *)(lVar5 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) goto LAB_01381920;
      }
      puVar6 = (ulong *)(**(code **)(*plVar4 + 0x30))(plVar4,__size,8);
    }
    if (puVar6 != (ulong *)0x0) {
      puVar7 = puVar6 + 1;
      *puVar6 = (ulong)uVar3;
      puVar1 = PTR_DAT_04bbc5c0 + 0x10;
      puVar2 = PTR_DAT_04bbc198 + 0x10;
      puVar6 = puVar7;
      do {
        *(undefined8 *)((long)puVar6 + 0x14) = 0xffffffffffffffff;
        *(undefined2 *)((long)puVar6 + 0x1c) = 0;
        *(undefined1 *)(puVar6 + 2) = 0;
        *(undefined1 *)((long)puVar6 + 0x1e) = 0xff;
        *(undefined4 *)(puVar6 + 4) = 0xffffffff;
        *(undefined2 *)((long)puVar6 + 0x24) = 0xffff;
        *puVar6 = (ulong)puVar1;
        puVar6[1] = 0;
        puVar6[5] = (ulong)puVar2;
        puVar6[6] = 0;
        puVar6[7] = (ulong)puVar2;
        puVar6[8] = 0;
        puVar6[9] = (ulong)puVar2;
        puVar6[10] = 0;
        puVar6[0xb] = (ulong)puVar2;
        puVar6[0xc] = 0;
        puVar6 = puVar6 + 0xd;
      } while (puVar6 != puVar7 + (ulong)uVar3 * 0xd);
      *(uint *)(param_1 + 0x30) = uVar3;
      *(ulong **)(param_1 + 0x38) = puVar7;
    }
  }
LAB_01381920:
  puVar1 = PTR_DAT_04bb2018;
  iVar11 = *(int *)((long)param_2 + 0xc);
  if ((0 < iVar11) && (iVar8 = (int)param_2[1], 0 < iVar8)) {
    iVar9 = 0;
    puVar2 = PTR_DAT_04bb2018 + 0x10;
    do {
      if (0 < iVar8) {
        iVar11 = 0;
        do {
          local_68 = (undefined *)((ulong)local_68 & 0xffffffffffffff00);
          local_70 = iVar11 + *(int *)(param_1 + 0x28);
          iStack_6c = *(int *)(param_1 + 0x2c) + iVar9;
          uVar3 = iVar11 + iVar9 * *(int *)(param_1 + 0x18);
          if (*(uint *)(param_1 + 0x30) <= uVar3) {
            uVar3 = 0;
          }
          local_78 = puVar2;
          FUN_0137d9f4(*(long *)(param_1 + 0x38) + (long)(int)uVar3 * 0x68,&local_78);
          iVar8 = (int)param_2[1];
          iVar11 = iVar11 + 1;
        } while (iVar11 < iVar8);
        iVar11 = *(int *)((long)param_2 + 0xc);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar11);
  }
  if ((char)param_2[5] != '\0') {
    local_68 = puVar1 + 0x10;
    local_78 = (undefined *)*param_2;
    local_60 = (undefined4)param_2[7];
    local_5c = *(undefined8 *)((long)param_2 + 0x3c);
    local_54 = *(undefined4 *)((long)param_2 + 0x44);
    local_70 = *(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x18);
    FUN_01383030(param_1 + 0x88,param_1 + 0x30,&local_78);
    iVar11 = *(int *)((long)param_2 + 0xc);
  }
  iStack_6c = iVar11;
  local_78 = (undefined *)*param_2;
  local_70 = (int)param_2[1];
  FUN_013834a4(param_1 + 0x40,&local_78);
  uVar3 = *(uint *)(param_1 + 8) & 0xfffffffe | (uint)*(byte *)(param_2 + 4);
  *(uint *)(param_1 + 8) = uVar3;
  uVar3 = uVar3 & 0xfffffffd | (uint)*(byte *)((long)param_2 + 0x21) << 1;
  *(uint *)(param_1 + 8) = uVar3;
  *(uint *)(param_1 + 8) = uVar3 & 0xfffffffb | (uint)*(byte *)((long)param_2 + 0x22) << 2;
  return;
}

