
/* WARNING: Removing unreachable block (ram,0x03c20580) */

void FUN_03c20480(long param_1,uint param_2,long param_3)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  undefined1 *__src;
  int iVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined1 *__dest;
  long lVar15;
  undefined *local_c8;
  char *pcStack_c0;
  undefined *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  undefined *local_60;
  long lStack_58;
  
  if (param_3 == 0) {
    return;
  }
  if (*(long *)PTR_DAT_04bbd8f8 == 0) {
    return;
  }
  local_65 = 0;
  local_a8 = 0x40;
  local_a4[0] = 0;
  local_b0 = local_a4;
  local_b8 = PTR_DAT_04bb2bc0 + 0x10;
  FUN_038d1270(&local_b8,"%s/%s%s.szs","Effect",param_3,".Nin_NX_NVN");
  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,param_2);
  if (param_2 == 2) {
    uVar14 = 5;
    if (*(long *)(*(long *)PTR_DAT_04bb2628 + 0x128) == 0) {
      uVar14 = 6;
    }
    local_60 = (undefined *)CONCAT44(local_60._4_4_,uVar14);
    uVar10 = (ulong)uVar14;
    if (6 < uVar14) {
      uVar10 = 0;
    }
    lVar8 = *(long *)(*(long *)PTR_DAT_04bb2628 + 0x100 + uVar10 * 8);
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 0) {
        if ((DAT_05aecb28 == (long *)0x0) ||
           (lVar8 = (**(code **)(*DAT_05aecb28 + 0x18))(), lVar8 == 0)) {
          lVar8 = *(long *)(*(long *)PTR_DAT_04bb2660 + 0x330);
          lVar13 = *(long *)(param_1 + 0x338);
        }
        else {
          lVar8 = (**(code **)(*DAT_05aecb28 + 0x18))();
          lVar13 = *(long *)(param_1 + 0x338);
        }
      }
      else {
        lVar8 = 0;
        lVar13 = 0;
      }
      goto LAB_03c20604;
    }
    lVar13 = *(long *)PTR_DAT_04bb2698;
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar9 = (long *)(lVar13 + 8);
    if (lVar8 != 0) {
      plVar9 = (long *)(lVar8 + 0xa8);
    }
    lVar8 = *plVar9;
  }
  lVar13 = lVar8;
LAB_03c20604:
  plVar9 = (long *)FUN_03eba090(&local_b8,lVar8,0x1000,0,1,0);
  lVar8 = *(long *)(param_1 + 0x330);
  local_c8 = PTR_DAT_04bb2020 + 0x10;
  pcStack_c0 = "Particle.Nin_NX_NVN.ptcl";
  if (((*PTR_DAT_04bb2868 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2868);
  }
  uVar10 = (**(code **)*plVar9)(plVar9,PTR_DAT_04bb2860);
  if ((uVar10 & 1) == 0) {
    plVar9 = (long *)0x0;
  }
  uVar11 = (**(code **)(*plVar9 + 0x30))(plVar9,&local_c8,0);
  piVar1 = (int *)(param_1 + 0x358);
  piVar3 = (int *)(param_1 + 0x340) + param_2;
  if (2 < param_2) {
    piVar3 = (int *)(param_1 + 0x340);
  }
  piVar4 = piVar1 + param_2;
  if (2 < param_2) {
    piVar4 = piVar1;
  }
  iVar7 = *piVar4 + *piVar3;
  *(long *)(*(long *)(lVar8 + 0x1b28) + (long)iVar7 * 8) = lVar13;
  local_60 = PTR_DAT_04bd19d8 + 0x10;
  lStack_58 = lVar13;
  if (lVar13 == 0) {
    lVar15 = 1;
  }
  else {
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar15 = *(long *)(lVar12 + 0xa8);
    *(long *)(lVar12 + 0xa8) = lVar13;
  }
  FUN_0033cbb4(lVar8,&local_60,uVar11,iVar7,0,0);
  lVar12 = *(long *)(*(long *)(lVar8 + 0x198) + (long)iVar7 * 8);
  lVar13 = 0;
  if (*(char *)(lVar12 + 9) != '\0') {
    lVar13 = lVar12;
  }
  FUN_00332ed0(lVar13,*(undefined8 *)(lVar8 + 0x2c30),0);
  if (lVar15 != 1) {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar8 + 0xa8) = lVar15;
  }
  puVar2 = (uint *)(param_1 + 0x368);
  puVar5 = puVar2 + (ulong)param_2 * 4;
  if (2 < param_2) {
    puVar5 = puVar2;
  }
  if (*(long *)(puVar5 + 2) != 0) {
    uVar10 = (ulong)param_2;
    puVar5 = puVar2 + (ulong)param_2 * 4;
    if (2 < param_2) {
      puVar5 = puVar2;
    }
    if (2 < param_2) {
      uVar10 = 0;
    }
    uVar14 = piVar1[uVar10];
    if (*puVar5 <= uVar14) {
      uVar14 = 0;
    }
    lVar8 = *(long *)(puVar5 + 2) + (long)(int)uVar14 * 0x118;
    __dest = *(undefined1 **)(lVar8 + 8);
    (**(code **)(local_b8 + 0x18))(&local_b8);
    __src = local_b0;
    if (__dest != local_b0) {
      (**(code **)(local_b8 + 0x18))(&local_b8);
      lVar13 = 0;
      do {
        if (local_b0[lVar13] == '\0') goto LAB_03c2082c;
        if (local_b0[lVar13 + 1] == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_03c2082c;
        }
        if (local_b0[lVar13 + 2] == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_03c2082c;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_03c2082c:
      iVar6 = *(int *)(lVar8 + 0x10);
      iVar7 = (int)lVar13;
      if (iVar6 <= (int)lVar13) {
        iVar7 = iVar6 + -1;
      }
      memcpy(__dest,__src,(long)iVar7);
      __dest[iVar7] = 0;
    }
  }
  uVar10 = (ulong)param_2;
  if (2 < param_2) {
    uVar10 = 0;
  }
  piVar1[uVar10] = piVar1[uVar10] + 1;
  return;
}

