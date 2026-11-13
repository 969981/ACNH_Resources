
void FUN_00ce7210(undefined1 param_1 [16],float param_2,float param_3,long param_4,uint *param_5)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  undefined4 *puVar12;
  long *plVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  uint uVar16;
  float fVar17;
  float extraout_s0;
  undefined8 local_50;
  float local_48;
  undefined4 local_24;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  puVar15 = (undefined8 *)**(undefined8 **)(param_4 + 8);
  uVar16 = *param_5;
  if ((((uVar16 == 0) ||
       (plVar13 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar16 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
      ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar16)) {
    plVar13 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar16 = 1;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_00ce72d8;
      uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_00ce72d8:
    uVar16 = 0;
  }
  if (plVar13 == (long *)0x0) {
    return;
  }
  lVar8 = plVar13[0x2a];
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar7 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb37d0);
  uVar1 = 0;
  if ((int)lVar8 == 1) {
    uVar1 = uVar16;
  }
  if ((uVar7 & 1) == 0) {
    return;
  }
  if (uVar1 == 0) {
    return;
  }
  local_50 = *puVar15;
  local_48 = *(float *)(puVar15 + 1);
  plVar6 = plVar13 + 0x7c;
  (**(code **)(plVar13[0x7c] + 0x18))(plVar6);
  (**(code **)(plVar13[0x7c] + 0x18))(plVar6);
  if ((undefined1 *)plVar13[0x7d] == &DAT_04066e12) {
LAB_00ce73b4:
    lVar8 = *(long *)(param_4 + 0x10);
    pfVar9 = (float *)(lVar8 + 0x10);
    pfVar10 = (float *)(lVar8 + 0x14);
    pfVar11 = (float *)(lVar8 + 0x18);
    puVar12 = (undefined4 *)(lVar8 + 0x1c);
  }
  else {
    uVar7 = 0;
    bVar4 = true;
    do {
      cVar2 = ((undefined1 *)plVar13[0x7d])[uVar7];
      if (cVar2 != (&DAT_04066e12)[uVar7]) break;
      if (cVar2 == '\0') {
        if (bVar4) goto LAB_00ce73b4;
        break;
      }
      bVar4 = uVar7 < 0x80000;
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0x80001);
    (**(code **)(plVar13[0x7c] + 0x18))(plVar6);
    (**(code **)(plVar13[0x7c] + 0x18))(plVar6);
    if ((undefined1 *)plVar13[0x7d] == &DAT_040bf969) {
LAB_00ce7440:
      lVar8 = *(long *)(param_4 + 0x10);
      pfVar9 = (float *)(lVar8 + 0x20);
      pfVar10 = (float *)(lVar8 + 0x24);
      pfVar11 = (float *)(lVar8 + 0x28);
      puVar12 = (undefined4 *)(lVar8 + 0x2c);
    }
    else {
      uVar7 = 0;
      bVar4 = true;
      do {
        cVar2 = ((undefined1 *)plVar13[0x7d])[uVar7];
        if (cVar2 != (&DAT_040bf969)[uVar7]) break;
        if (cVar2 == '\0') {
          if (bVar4) goto LAB_00ce7440;
          break;
        }
        bVar4 = uVar7 < 0x80000;
        uVar7 = uVar7 + 1;
      } while (uVar7 != 0x80001);
      (**(code **)(plVar13[0x7c] + 0x18))(plVar6);
      (**(code **)(plVar13[0x7c] + 0x18))(plVar6);
      if ((undefined1 *)plVar13[0x7d] == &DAT_040dedd9) {
LAB_00ce74c4:
        lVar8 = *(long *)(param_4 + 0x10);
        pfVar9 = (float *)(lVar8 + 0x30);
        pfVar10 = (float *)(lVar8 + 0x34);
        pfVar11 = (float *)(lVar8 + 0x38);
        puVar12 = (undefined4 *)(lVar8 + 0x3c);
      }
      else {
        uVar7 = 0;
        bVar4 = true;
        do {
          cVar2 = ((undefined1 *)plVar13[0x7d])[uVar7];
          if (cVar2 != (&DAT_040dedd9)[uVar7]) break;
          if (cVar2 == '\0') {
            if (bVar4) goto LAB_00ce74c4;
            break;
          }
          bVar4 = uVar7 < 0x80000;
          uVar7 = uVar7 + 1;
        } while (uVar7 != 0x80001);
        if ((int)plVar13[0xa0] != 0) {
          return;
        }
        if (*(char *)(*(long *)(param_4 + 8) + 0x10) == '\0') {
          return;
        }
        iVar5 = FUN_021d6100((int)plVar13[0xa1]);
        if (iVar5 == 1) {
          lVar8 = *(long *)(param_4 + 0x10);
          pfVar9 = (float *)(lVar8 + 0x50);
          pfVar10 = (float *)(lVar8 + 0x54);
          pfVar11 = (float *)(lVar8 + 0x58);
          puVar12 = (undefined4 *)(lVar8 + 0x5c);
        }
        else {
          if (iVar5 != 7) {
            uVar14 = 0;
            fVar17 = extraout_s0;
            goto LAB_00ce74e8;
          }
          lVar8 = *(long *)(param_4 + 0x10);
          pfVar9 = (float *)(lVar8 + 0x40);
          pfVar10 = (float *)(lVar8 + 0x44);
          pfVar11 = (float *)(lVar8 + 0x48);
          puVar12 = (undefined4 *)(lVar8 + 0x4c);
        }
      }
    }
  }
  fVar17 = *pfVar11;
  param_3 = *pfVar9;
  param_2 = *pfVar10;
  uVar14 = *puVar12;
LAB_00ce74e8:
  local_48 = fVar17 + local_48;
  local_50 = CONCAT44(param_2 + local_50._4_4_,param_3 + (float)local_50);
  local_24 = uVar14;
  FUN_01e39778(plVar13,&local_50,&local_24,0);
  lVar8 = plVar13[0x76];
  *(undefined4 *)(lVar8 + 0x4e4) = uVar14;
  if (*(int *)(lVar8 + 0x378) < 0x23) {
    *(undefined4 *)(lVar8 + 0x3a4) = uVar14;
  }
  return;
}

