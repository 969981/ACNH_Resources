
void FUN_03a7b310(long param_1,undefined4 *param_2,long *param_3,long param_4)

{
  size_t __size;
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  ulong *puVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined *local_480;
  long local_478;
  undefined8 local_470;
  undefined1 local_6d;
  
  *(undefined4 *)(param_1 + 0x31c) = *param_2;
  uVar10 = param_2[2];
  uVar11 = (ulong)uVar10;
  if ((int)uVar10 < 1) goto LAB_03a7b43c;
  __size = uVar11 * 0x88 + 8;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    puVar5 = malloc(__size);
joined_r0x03a7b3c8:
    if (puVar5 != (ulong *)0x0) {
      *puVar5 = uVar11;
      puVar1 = PTR_DAT_04bd0fb0 + 0x10;
      lVar12 = 0;
      do {
        lVar3 = lVar12 + 0x88;
        *(undefined4 *)((long)puVar5 + lVar12 + 0x40) = 0x10001;
        *(undefined8 *)((long)puVar5 + lVar12 + 0x30) = 0;
        *(undefined8 *)((long)puVar5 + lVar12 + 0x38) = 0;
        *(undefined1 *)((long)puVar5 + lVar12 + 0x44) = 0;
        *(undefined **)((long)puVar5 + lVar12 + 8) = puVar1;
        *(undefined8 *)((long)puVar5 + lVar12 + 0x20) = 0;
        *(undefined8 *)((long)puVar5 + lVar12 + 0x28) = 0;
        *(undefined8 *)((long)puVar5 + lVar12 + 0x10) = 0;
        *(undefined8 *)((long)puVar5 + lVar12 + 0x18) = 0;
        *(undefined8 *)((long)puVar5 + lVar12 + 0x78) = 0;
        *(undefined8 *)((long)puVar5 + lVar12 + 0x80) = 0x4000000001;
        *(undefined4 *)((long)puVar5 + lVar12 + 0x88) = 0;
        lVar12 = lVar3;
      } while (uVar11 * 0x88 != lVar3);
      *(uint *)(param_1 + 0x248) = uVar10;
      *(ulong **)(param_1 + 0x250) = puVar5 + 1;
    }
  }
  else {
    plVar4 = param_3;
    if (param_3 != (long *)0x0) {
LAB_03a7b3a4:
      puVar5 = (ulong *)(**(code **)(*plVar4 + 0x30))(plVar4,__size,8);
      goto joined_r0x03a7b3c8;
    }
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar12 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 != (long *)0x0) goto LAB_03a7b3a4;
  }
  uVar10 = param_2[2];
LAB_03a7b43c:
  if (uVar10 != 0) {
    uVar10 = 0;
    do {
      uVar2 = uVar10;
      if (*(uint *)(param_1 + 0x248) <= uVar10) {
        uVar2 = 0;
      }
      lVar12 = *(long *)(param_1 + 0x250) + (long)(int)uVar2 * 0x88;
      FUN_0390d714(lVar12,1,param_3);
      iVar7 = *(int *)(param_1 + 0x31c);
      piVar8 = (int *)(**(long **)(lVar12 + 8) +
                      (ulong)*(ushort *)((long)*(long **)(lVar12 + 8) + 10) * 0xc);
      *(undefined1 *)(piVar8 + 2) = 0x12;
      *piVar8 = iVar7;
      *(undefined2 *)((long)piVar8 + 6) = 2;
      uVar2 = *(int *)(lVar12 + 0x30) + 7U & 0xfffffff8;
      *(uint *)(lVar12 + 0x30) = uVar2;
      *(short *)(piVar8 + 1) = (short)uVar2;
      *(uint *)(lVar12 + 0x30) =
           *(int *)(lVar12 + 0x30) + (uint)*(ushort *)((long)piVar8 + 6) * *piVar8 * 4;
      *(short *)(*(long *)(lVar12 + 8) + 10) = *(short *)(*(long *)(lVar12 + 8) + 10) + 1;
      if (*(short *)(*(long *)(lVar12 + 8) + 10) == *(short *)(*(long *)(lVar12 + 8) + 8)) {
        *(uint *)(lVar12 + 0x30) = *(int *)(lVar12 + 0x30) + 0x1fU & 0xffffffe0;
      }
      FUN_0390d990(lVar12,param_3,2,1);
      uVar10 = uVar10 + 1;
    } while (uVar10 < (uint)param_2[2]);
  }
  iVar7 = param_2[1];
  if (iVar7 != 0) {
    if (param_3 == (long *)0x0) {
      lVar3 = *(long *)PTR_DAT_04bb2698;
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_3 = (long *)(lVar3 + 8);
      if (lVar12 != 0) {
        param_3 = (long *)(lVar12 + 0xa8);
      }
      param_3 = (long *)*param_3;
    }
    *(undefined8 *)(param_1 + 0x308) = 0;
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    *(undefined8 *)(param_1 + 0x2e8) = 0;
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    uVar6 = *(undefined8 *)PTR_DAT_04bd0fa8;
    *(byte *)(param_1 + 0x300) = *(byte *)(param_1 + 0x300) & 0xfe;
    *(undefined2 *)(param_1 + 0x302) = 0;
    FUN_038f8590(uVar6,param_1 + 0x2d8,param_3,iVar7,0x20,0x200);
    *(undefined2 *)(param_1 + 0x302) = 0x200;
    local_478 = *(long *)(param_1 + 0x2f0);
    iVar7 = 0;
    if (*(long *)(param_1 + 0x2f8) != 0) {
      iVar7 = *(int *)(param_1 + 0x2e0) - *(int *)(*(long *)(param_1 + 0x2f8) + 0x10);
    }
    if (local_478 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined4 *)(local_478 + 0x104);
    }
    local_480 = (undefined *)CONCAT44(uVar9,iVar7);
    *(undefined4 *)(param_1 + 0x2d4) = 0x20;
    *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_1 + 0x2e8);
    *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_1 + 0x2e8);
    local_470 = param_1 + 0x2d8;
    FUN_0390dc00(param_1 + 600,&local_480,1,1);
  }
  if (param_4 != 0) {
    local_6d = 0;
    local_478 = (long)&local_470 + 4;
    local_470 = CONCAT35(local_470._5_3_,0x400);
    local_480 = PTR_DAT_04bb2f40 + 0x10;
    FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",&DAT_040c76c7);
  }
  return;
}

