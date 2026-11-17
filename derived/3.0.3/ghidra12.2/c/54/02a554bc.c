
/* WARNING: Removing unreachable block (ram,0x02a5556c) */
/* WARNING: Removing unreachable block (ram,0x02a5567c) */

float FUN_02a554bc(long param_1,undefined8 param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  ulong local_50;
  undefined4 local_48;
  
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  local_60 = 0;
  local_58 = 0;
  lVar4 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0xb4510);
  local_50 = *(ulong *)(lVar4 + 0x130);
  local_48 = (undefined4)*(undefined8 *)(lVar4 + 0x138);
  FUN_02a1e144(lVar4,&local_60,param_2,&local_50,param_3);
  FUN_02a1e4c0(local_60,local_58,lVar4,&local_78);
  local_50 = local_50 & 0xffffffff00000000;
  fVar7 = local_78._4_4_ / 10.0;
  lVar4 = *(long *)(param_1 + 0x90);
  plVar3 = *(long **)(param_1 + 0x60);
  if (lVar4 == 0) {
    fVar5 = 1.0;
    if (plVar3 != (long *)0x0) {
      fVar6 = (float)(**(code **)(*plVar3 + 0x30))();
      bVar2 = false;
      bVar1 = true;
      if (0.0 < fVar6) {
        bVar2 = false;
        bVar1 = true;
        if (!NAN(fVar6) && !NAN(fVar7)) {
          bVar2 = fVar6 == fVar7;
          bVar1 = fVar7 <= fVar6;
        }
      }
      if (!bVar1 || bVar2) {
        return 0.0;
      }
    }
    bVar2 = false;
    goto LAB_02a5566c;
  }
  if ((plVar3 == (long *)0x0) || (fVar5 = (float)(**(code **)(*plVar3 + 0x30))(), fVar5 == 0.0)) {
    fVar5 = *(float *)(lVar4 + 0x50);
    if (0.0 < fVar5) {
      if (fVar5 <= fVar7) {
        return 0.0;
      }
      fVar6 = *(float *)(lVar4 + 0x54);
      if ((0.0 < fVar6) && (fVar5 - fVar6 < fVar7)) {
        fVar6 = (fVar7 - (fVar5 - fVar6)) / fVar6;
        goto LAB_02a55634;
      }
    }
  }
  else {
    fVar6 = *(float *)(lVar4 + 0x54);
    fVar5 = fVar5 + fVar6;
    if (0.0 < fVar5) {
      if (fVar5 <= fVar7) {
        return 0.0;
      }
      if ((0.0 < fVar6) && (fVar5 - fVar6 < fVar7)) {
        fVar6 = (fVar7 - (fVar5 - fVar6)) / fVar6;
LAB_02a55634:
        bVar2 = *(char *)(lVar4 + 0x58) != '\0';
        fVar5 = (1.0 - fVar6) * (1.0 - fVar6);
        if (fVar5 == 0.0) {
          return 0.0;
        }
        goto LAB_02a5566c;
      }
    }
  }
  fVar5 = 1.0;
  bVar2 = *(char *)(lVar4 + 0x58) != '\0';
LAB_02a5566c:
  local_50 = CONCAT44(local_50._4_4_,4);
  if (*(long **)(param_1 + 0x80) == (long *)0x0) {
    fVar5 = 1.0;
  }
  else {
    fVar7 = (float)(**(code **)(**(long **)(param_1 + 0x80) + 0x28))(uStack_68._4_4_ / 10.0);
    if (!bVar2) {
      fVar5 = 1.0;
    }
    fVar5 = fVar5 * fVar7;
  }
  return fVar5;
}

