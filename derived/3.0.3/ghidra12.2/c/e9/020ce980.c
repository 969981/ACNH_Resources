
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_020ce980(long param_1,uint *param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined *local_78;
  char *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined4 local_54;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  uVar10 = *param_2;
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_020cea44;
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_020cea44:
    uVar10 = 0;
  }
  if (plVar9 == (long *)0x0) {
    return;
  }
  lVar7 = plVar9[0x2a];
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
  puVar3 = PTR_DAT_04bb2020;
  uVar2 = 0;
  if ((int)lVar7 == 1) {
    uVar2 = uVar10;
  }
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (uVar2 == 0) {
    return;
  }
  local_68 = PTR_DAT_04bb2020 + 0x10;
  local_60 = "kpp";
  (**(code **)(plVar9[0x7c] + 0x18))(plVar9 + 0x7c);
  lVar7 = 0;
  do {
    if (*(char *)(plVar9[0x7d] + lVar7) == '\0') {
LAB_020ceb04:
      iVar4 = (int)lVar7;
joined_r0x020ceb08:
      if (2 < iVar4) {
        uVar6 = 0;
        goto LAB_020ceb3c;
      }
      break;
    }
    lVar8 = plVar9[0x7d] + lVar7;
    if (*(char *)(lVar8 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_020ceb04;
    }
    if (*(char *)(lVar8 + 2) == '\0') {
      iVar4 = (int)lVar7 + 2;
      goto joined_r0x020ceb08;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  goto LAB_020ceba0;
  while (uVar6 = uVar6 + 1, iVar4 - 2 != uVar6) {
LAB_020cec30:
    pcVar1 = (char *)(plVar9[0x7d] + uVar6);
    (**(code **)(local_78 + 0x18))(&local_78);
    if ((pcVar1 == local_70) ||
       ((*pcVar1 == *local_70 &&
        ((*pcVar1 == '\0' ||
         ((pcVar1[1] == local_70[1] && ((pcVar1[1] == '\0' || (pcVar1[2] == local_70[2])))))))))) {
      if ((int)uVar6 != -1) {
        return;
      }
      break;
    }
  }
  goto LAB_020cec94;
  while (uVar6 = uVar6 + 1, iVar4 - 2 != uVar6) {
LAB_020ceb3c:
    pcVar1 = (char *)(plVar9[0x7d] + uVar6);
    (**(code **)(local_68 + 0x18))(&local_68);
    if ((pcVar1 == local_60) ||
       ((*pcVar1 == *local_60 &&
        ((*pcVar1 == '\0' ||
         ((pcVar1[1] == local_60[1] && ((pcVar1[1] == '\0' || (pcVar1[2] == local_60[2])))))))))) {
      if ((int)uVar6 != -1) {
        return;
      }
      break;
    }
  }
LAB_020ceba0:
  local_78 = puVar3 + 0x10;
  local_70 = "seo";
  (**(code **)(plVar9[0x7c] + 0x18))(plVar9 + 0x7c);
  lVar7 = 0;
  do {
    if (*(char *)(plVar9[0x7d] + lVar7) == '\0') {
LAB_020cec00:
      iVar4 = (int)lVar7;
joined_r0x020cec04:
      if (2 < iVar4) {
        uVar6 = 0;
        goto LAB_020cec30;
      }
      break;
    }
    lVar8 = plVar9[0x7d] + lVar7;
    if (*(char *)(lVar8 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_020cec00;
    }
    if (*(char *)(lVar8 + 2) == '\0') {
      iVar4 = (int)lVar7 + 2;
      goto joined_r0x020cec04;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
LAB_020cec94:
  lVar7 = plVar9[0x77];
  if (lVar7 != 0) {
    fVar11 = *(float *)(plVar9[0xd] + 0x278);
    fVar12 = *(float *)(plVar9[0xd] + 0x280);
    lVar8 = *(long *)(param_1 + 8);
    local_68 = PTR_DAT_04bb2010 + 0x10;
    local_60 = (char *)CONCAT44((int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0),
                                (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0));
    fVar14 = (float)*(int *)(lVar8 + 0x14) * 5.0;
    fVar13 = (float)*(int *)(lVar8 + 0x10) * 5.0;
    if ((fVar13 <= fVar11) && (fVar13 = (float)*(int *)(lVar8 + 0x20) * 5.0 + 5.0, fVar11 <= fVar13)
       ) {
      fVar13 = fVar11;
    }
    if ((fVar14 <= fVar12) && (fVar14 = (float)*(int *)(lVar8 + 0x24) * 5.0 + 5.0, fVar12 <= fVar14)
       ) {
      fVar14 = fVar12;
    }
    if (SQRT((fVar14 - fVar12) * (fVar14 - fVar12) + (fVar13 - fVar11) * (fVar13 - fVar11)) <= 4.0)
    {
      local_70 = (char *)((ulong)local_70 & 0xffffffff00000000);
      local_78 = (undefined *)0x0;
      local_54 = 0x2d;
      local_54 = 0x2d;
      local_78 = (undefined *)0x200000000000;
      lVar8 = *(long *)PTR_DAT_04bb27c8;
      if (((lVar8 != 0) && (*(long *)(lVar8 + 0xa8) != 0)) &&
         (uVar6 = FUN_00949898(lVar8 + 0x28,&local_68,&local_78), (uVar6 & 1) != 0)) {
        FUN_01ea8290(lVar7,*(undefined8 *)(param_1 + 8));
      }
    }
  }
  return;
}

