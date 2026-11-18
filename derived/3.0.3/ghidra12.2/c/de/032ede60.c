
/* WARNING: Removing unreachable block (ram,0x032edf28) */
/* WARNING: Removing unreachable block (ram,0x032edf08) */
/* WARNING: Removing unreachable block (ram,0x032edfb0) */
/* WARNING: Removing unreachable block (ram,0x032edfcc) */

undefined8 FUN_032ede60(long param_1,short *param_2)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  short sVar4;
  undefined2 *__s;
  short *psVar5;
  short *psVar6;
  long lVar7;
  int iVar8;
  size_t __n;
  undefined2 *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  undefined *local_f8;
  short *local_f0;
  undefined *local_e8;
  short *local_e0;
  uint local_d8;
  short local_d4 [55];
  undefined2 local_66;
  
  local_e0 = local_d4;
  local_66 = 0;
  local_d4[0] = 0;
  lVar10 = *(long *)PTR_DAT_04bc96a8;
  local_d8 = 0x38;
  local_e8 = &DAT_04b1c4d0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar8 = 0;
    puVar1 = PTR_DAT_04bb8610 + 0x10;
    do {
      (**(code **)(local_e8 + 0x18))(&local_e8);
      uVar3 = local_d8;
      psVar5 = local_e0;
      __n = (long)(int)local_d8 << 1;
      uVar11 = (ulong)local_f8 >> 0x20;
      local_f8 = (undefined *)(uVar11 << 0x20);
      plVar12 = *(long **)PTR_DAT_04bc96a8;
      if (*plVar12 == 0) {
        __s = (undefined2 *)0x0;
      }
      else {
        local_f8 = (undefined *)(uVar11 << 0x20);
        __s = (undefined2 *)(**(code **)(*(long *)*plVar12 + 0x30))((long *)*plVar12,__n,8);
      }
      uVar11 = (ulong)uVar3;
      memset(__s,0,__n);
      FUN_032f9248(*(undefined8 *)PTR_DAT_04bc96d0,plVar12 + 2,0,iVar8,__s,__n & 0xffffffff);
      if (0 < (int)uVar3) {
        puVar9 = __s;
        do {
          sVar4 = FUN_038cd950(*puVar9);
          uVar11 = uVar11 - 1;
          *psVar5 = sVar4;
          puVar9 = puVar9 + 1;
          psVar5 = psVar5 + 1;
        } while (uVar11 != 0);
      }
      if (*plVar12 != 0) {
        local_f8 = (undefined *)((ulong)local_f8 & 0xffffffff00000000);
        (**(code **)(*(long *)*plVar12 + 0x38))((long *)*plVar12,__s);
      }
      local_f8 = puVar1;
      local_f0 = param_2;
      (**(code **)(local_e8 + 0x18))(&local_e8);
      (**(code **)(local_e8 + 0x18))(&local_e8);
      psVar5 = local_e0;
      (**(code **)(local_f8 + 0x18))(&local_f8);
      if (psVar5 == local_f0) {
LAB_032ee06c:
        FUN_032efbb0(*(undefined8 *)PTR_DAT_04bc96d0,lVar10 + 0x10,0,iVar8);
        return 1;
      }
      psVar5 = local_f0;
      psVar6 = local_e0;
      lVar7 = 0x7ffff;
      while( true ) {
        if (*psVar6 != *psVar5) break;
        if ((*psVar6 == 0) ||
           (bVar2 = lVar7 == 0, psVar5 = psVar5 + 1, psVar6 = psVar6 + 1, lVar7 = lVar7 + -1, bVar2)
           ) goto LAB_032ee06c;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 4));
  }
  return 0;
}

