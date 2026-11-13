
uint FUN_0137b4bc(long param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  
  puVar6 = PTR_DAT_04bb27c0;
  lVar12 = *(long *)PTR_DAT_04bb27c0;
  if (lVar12 != 0) {
    uVar14 = *param_2;
    if ((((uVar14 == 0) ||
         (plVar13 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                              ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
        ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar14)) {
      plVar13 = (long *)0x0;
    }
    if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
      plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar12 = *(long *)puVar6;
      iVar7 = (**(code **)(*plVar10 + 0x60))();
      if (iVar7 < 0x11) {
        uVar14 = 1;
      }
      else {
        if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_0137b57c;
        uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_0137b57c:
      uVar14 = 0;
    }
    if (plVar13 != (long *)0x0) {
      lVar12 = plVar13[0x2a];
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar7 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar11 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bb37d0);
      uVar9 = 0;
      uVar1 = 0;
      if ((int)lVar12 == 1) {
        uVar1 = uVar14;
      }
      if (((uVar11 & 1) == 0) || (uVar1 == 0)) goto LAB_0137b640;
      lVar12 = plVar13[0xd];
      if (lVar12 != 0) {
        lVar15 = *(long *)PTR_DAT_04bb4138;
        if (lVar15 != 0) {
          (**(code **)(plVar13[0x7c] + 0x18))(plVar13 + 0x7c);
          uVar8 = FUN_006bd550(plVar13[0x7d],0);
          local_68 = (undefined *)CONCAT44(local_68._4_4_,uVar8);
          lVar15 = FUN_0079e770(lVar15,&local_68);
          uVar9 = 0;
          if (lVar15 != 0) goto LAB_0137b640;
        }
        if ((plVar13[0x77] != 0) && ((*(byte *)(plVar13[0x77] + 0xad59) >> 4 & 1) != 0)) {
          local_58 = 0;
          local_68 = PTR_DAT_04bbc1a0 + 0x10;
          puStack_60 = PTR_DAT_04bb2010 + 0x10;
          plVar13 = (long *)plVar13[0x12];
          local_48 = 0;
          local_50 = puStack_60;
          if (((*PTR_DAT_04bb5b58 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb5b58), iVar7 != 0)) {
            *(undefined **)PTR_DAT_04bb5b50 = PTR_DAT_04bb5b60 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb5b58);
          }
          fVar16 = 5.0;
          if (plVar13 != (long *)0x0) {
            uVar11 = (**(code **)(*plVar13 + 0x10))(plVar13,PTR_DAT_04bb5b50);
            fVar16 = 5.0;
            if ((uVar11 & 1) != 0) {
              fVar16 = (float)(int)*(float *)((long)plVar13 + 0x39c);
            }
          }
          if (fVar16 < 0.0) {
            fVar16 = 0.0;
          }
          fVar19 = *(float *)(lVar12 + 0x280) - fVar16;
          fVar18 = *(float *)(lVar12 + 0x278) - fVar16;
          fVar17 = *(float *)(lVar12 + 0x278) + fVar16;
          fVar16 = fVar16 + *(float *)(lVar12 + 0x280);
          iVar2 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
          iVar3 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
          iVar4 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
          iVar5 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
          iVar7 = iVar2;
          if (iVar4 <= iVar2) {
            iVar7 = iVar4;
          }
          if (iVar2 <= iVar4) {
            iVar2 = iVar4;
          }
          iVar4 = iVar3;
          if (iVar5 <= iVar3) {
            iVar4 = iVar5;
          }
          if (iVar3 <= iVar5) {
            iVar3 = iVar5;
          }
          local_58 = CONCAT44(iVar4,iVar7);
          local_48 = CONCAT44(iVar3,iVar2);
          uVar9 = (**(code **)**(undefined8 **)(param_1 + 8))
                            (*(undefined8 **)(param_1 + 8),&local_68);
          goto LAB_0137b640;
        }
      }
    }
  }
  uVar9 = 0;
LAB_0137b640:
  return uVar9 & 1;
}

