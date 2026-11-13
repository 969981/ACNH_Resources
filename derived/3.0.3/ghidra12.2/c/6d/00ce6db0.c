
void FUN_00ce6db0(long param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  float unaff_s8;
  float unaff_s9;
  float unaff_s10;
  undefined4 local_64;
  undefined8 local_60;
  float local_58;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  puVar11 = (undefined8 *)**(undefined8 **)(param_1 + 8);
  uVar12 = *param_2;
  if ((((uVar12 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar12)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar7 + 0x60))();
    if (iVar5 < 0x11) {
      uVar12 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_00ce6e80;
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_00ce6e80:
    uVar12 = 0;
  }
  if (plVar10 == (long *)0x0) {
    return;
  }
  lVar9 = plVar10[0x2a];
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar8 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
  uVar1 = 0;
  if ((int)lVar9 == 1) {
    uVar1 = uVar12;
  }
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (uVar1 == 0) {
    return;
  }
  local_60 = *puVar11;
  local_58 = *(float *)(puVar11 + 1);
  plVar7 = plVar10 + 0x7c;
  (**(code **)(plVar10[0x7c] + 0x18))(plVar7);
  (**(code **)(plVar10[0x7c] + 0x18))(plVar7);
  if ((undefined1 *)plVar10[0x7d] == &DAT_04066e12) {
LAB_00ce6f60:
    lVar9 = *(long *)(param_1 + 0x10);
    uVar6 = 0;
    unaff_s10 = *(float *)(lVar9 + 0x14);
    unaff_s8 = *(float *)(lVar9 + 0xc);
    unaff_s9 = *(float *)(lVar9 + 0x10);
  }
  else {
    uVar8 = 0;
    bVar4 = true;
    do {
      cVar2 = ((undefined1 *)plVar10[0x7d])[uVar8];
      if (cVar2 != (&DAT_04066e12)[uVar8]) break;
      if (cVar2 == '\0') {
        if (bVar4) goto LAB_00ce6f60;
        break;
      }
      bVar4 = uVar8 < 0x80000;
      uVar8 = uVar8 + 1;
    } while (uVar8 != 0x80001);
    (**(code **)(plVar10[0x7c] + 0x18))(plVar7);
    (**(code **)(plVar10[0x7c] + 0x18))(plVar7);
    if ((undefined1 *)plVar10[0x7d] == &DAT_040bf969) {
LAB_00ce6fe0:
      lVar9 = *(long *)(param_1 + 0x10);
      uVar6 = 0;
      unaff_s10 = *(float *)(lVar9 + 0x20);
      unaff_s8 = *(float *)(lVar9 + 0x18);
      unaff_s9 = *(float *)(lVar9 + 0x1c);
    }
    else {
      uVar8 = 0;
      bVar4 = true;
      do {
        cVar2 = ((undefined1 *)plVar10[0x7d])[uVar8];
        if (cVar2 != (&DAT_040bf969)[uVar8]) break;
        if (cVar2 == '\0') {
          if (bVar4) goto LAB_00ce6fe0;
          break;
        }
        bVar4 = uVar8 < 0x80000;
        uVar8 = uVar8 + 1;
      } while (uVar8 != 0x80001);
      (**(code **)(plVar10[0x7c] + 0x18))(plVar7);
      (**(code **)(plVar10[0x7c] + 0x18))(plVar7);
      if ((undefined1 *)plVar10[0x7d] == &DAT_040dedd9) {
LAB_00ce7060:
        lVar9 = *(long *)(param_1 + 0x10);
        unaff_s8 = *(float *)(lVar9 + 0x24);
        unaff_s9 = *(float *)(lVar9 + 0x28);
        unaff_s10 = *(float *)(lVar9 + 0x2c);
      }
      else {
        uVar8 = 0;
        bVar4 = true;
        do {
          cVar2 = ((undefined1 *)plVar10[0x7d])[uVar8];
          if (cVar2 != (&DAT_040dedd9)[uVar8]) break;
          if (cVar2 == '\0') {
            if (bVar4) goto LAB_00ce7060;
            break;
          }
          bVar4 = uVar8 < 0x80000;
          uVar8 = uVar8 + 1;
        } while (uVar8 != 0x80001);
        if ((int)plVar10[0xa0] != 0) {
          return;
        }
        if (*(char *)(*(long *)(param_1 + 8) + 0x10) == '\0') {
          return;
        }
        iVar5 = FUN_021d6100((int)plVar10[0xa1]);
        if (iVar5 == 1) {
          lVar9 = *(long *)(param_1 + 0x10);
          unaff_s8 = *(float *)(lVar9 + 0x3c);
          unaff_s9 = *(float *)(lVar9 + 0x40);
          unaff_s10 = *(float *)(lVar9 + 0x44);
        }
        else {
          if (iVar5 != 7) {
            uVar6 = 0;
            goto LAB_00ce7080;
          }
          lVar9 = *(long *)(param_1 + 0x10);
          unaff_s8 = *(float *)(lVar9 + 0x30);
          unaff_s9 = *(float *)(lVar9 + 0x34);
          unaff_s10 = *(float *)(lVar9 + 0x38);
        }
      }
      uVar6 = FUN_006f0400(0.0 - unaff_s8,0.0 - unaff_s10);
    }
  }
LAB_00ce7080:
  local_60 = CONCAT44(unaff_s9 + local_60._4_4_,unaff_s8 + (float)local_60);
  local_58 = unaff_s10 + local_58;
  local_64 = uVar6;
  FUN_01e39778(plVar10,&local_60,&local_64,0);
  lVar9 = plVar10[0x76];
  *(undefined4 *)(lVar9 + 0x4e4) = uVar6;
  if (*(int *)(lVar9 + 0x378) < 0x23) {
    *(undefined4 *)(lVar9 + 0x3a4) = uVar6;
  }
  return;
}

