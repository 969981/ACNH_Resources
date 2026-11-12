
void FUN_008bf770(undefined1 param_1 [16],float param_2,float param_3,long param_4,long *param_5,
                 long *param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  char *pcVar14;
  void *pvVar15;
  void *pvVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  
  if (*(char *)(param_4 + 0x37fac) == '\0') {
    *(undefined1 *)(param_4 + 0x37fad) = 0;
  }
  fVar17 = (float)FUN_008c4e0c(param_4);
  **(undefined1 **)(param_4 + 0x30710) = 0;
  **(undefined1 **)(param_4 + 0x30748) = 0;
  uVar12 = 0;
  do {
    pcVar14 = "";
    if (uVar12 < 99) {
      pcVar14 = (&PTR_s_cNormal_04922de8)[uVar12];
    }
    (**(code **)(*param_5 + 0x18))(param_5);
    pcVar8 = (char *)param_5[1];
    if (pcVar14 == pcVar8) goto LAB_008bf8e4;
    if (*pcVar14 == *pcVar8) {
      if (*pcVar14 == '\0') goto LAB_008bf8e4;
      lVar11 = 0x7fffe;
      while( true ) {
        if (pcVar14[1] != pcVar8[1]) break;
        if (pcVar14[1] == '\0') goto LAB_008bf8e4;
        if (pcVar14[2] != pcVar8[2]) break;
        if (pcVar14[2] == '\0') goto LAB_008bf8e4;
        if ((lVar11 == 0) || (cVar5 = pcVar14[3], cVar5 != pcVar8[3])) break;
        lVar11 = lVar11 + -3;
        pcVar8 = pcVar8 + 3;
        pcVar14 = pcVar14 + 3;
        if (cVar5 == '\0') goto LAB_008bf8e4;
      }
    }
    uVar6 = 99;
    if ((int)uVar12 < 99) {
      uVar6 = uVar12 + 1;
    }
    uVar12 = uVar6;
  } while (uVar6 != 99);
  uVar12 = 0x62;
LAB_008bf8e4:
  uVar6 = 0;
  do {
    pcVar14 = "";
    if (uVar6 < 0x2b) {
      pcVar14 = (&PTR_s_cDefault_04926690)[uVar6];
    }
    (**(code **)(*param_6 + 0x18))(param_6);
    pcVar8 = (char *)param_6[1];
    if (pcVar14 == pcVar8) goto joined_r0x008bf9c0;
    if (*pcVar14 == *pcVar8) {
      if (*pcVar14 == '\0') goto joined_r0x008bf9c0;
      lVar11 = 0x7fffe;
      while( true ) {
        if (pcVar14[1] != pcVar8[1]) break;
        if (pcVar14[1] == '\0') goto joined_r0x008bf9c0;
        if (pcVar14[2] != pcVar8[2]) break;
        if (pcVar14[2] == '\0') goto joined_r0x008bf9c0;
        if ((lVar11 == 0) || (cVar5 = pcVar14[3], cVar5 != pcVar8[3])) break;
        lVar11 = lVar11 + -3;
        pcVar8 = pcVar8 + 3;
        pcVar14 = pcVar14 + 3;
        if (cVar5 == '\0') goto joined_r0x008bf9c0;
      }
    }
    uVar13 = 0x2b;
    if ((int)uVar6 < 0x2b) {
      uVar13 = uVar6 + 1;
    }
    uVar6 = uVar13;
  } while (uVar13 != 0x2b);
  uVar6 = 0x2a;
joined_r0x008bf9c0:
  if (uVar12 == 0x62) {
    pvVar15 = *(void **)(param_4 + 0x30710);
    (**(code **)(*param_5 + 0x18))(param_5);
    pvVar16 = (void *)param_5[1];
    if (pvVar15 != pvVar16) {
      (**(code **)(*param_5 + 0x18))(param_5);
      lVar11 = 0;
      do {
        if (*(char *)(param_5[1] + lVar11) == '\0') goto LAB_008bfa50;
        lVar9 = param_5[1] + lVar11;
        if (*(char *)(lVar9 + 1) == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_008bfa50;
        }
        if (*(char *)(lVar9 + 2) == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_008bfa50;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_008bfa50:
      iVar2 = (int)lVar11;
      if (*(int *)(param_4 + 0x30718) <= (int)lVar11) {
        iVar2 = *(int *)(param_4 + 0x30718) + -1;
      }
      memcpy(pvVar15,pvVar16,(long)iVar2);
      *(undefined1 *)((long)pvVar15 + (long)iVar2) = 0;
    }
  }
  if (uVar6 == 0x2a) {
    pvVar15 = *(void **)(param_4 + 0x30748);
    (**(code **)(*param_6 + 0x18))(param_6);
    pvVar16 = (void *)param_6[1];
    if (pvVar15 != pvVar16) {
      (**(code **)(*param_6 + 0x18))(param_6);
      lVar11 = 0;
      do {
        if (*(char *)(param_6[1] + lVar11) == '\0') goto LAB_008bfafc;
        lVar9 = param_6[1] + lVar11;
        if (*(char *)(lVar9 + 1) == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_008bfafc;
        }
        if (*(char *)(lVar9 + 2) == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_008bfafc;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_008bfafc:
      iVar2 = (int)lVar11;
      if (*(int *)(param_4 + 0x30750) <= (int)lVar11) {
        iVar2 = *(int *)(param_4 + 0x30750) + -1;
      }
      memcpy(pvVar15,pvVar16,(long)iVar2);
      *(undefined1 *)((long)pvVar15 + (long)iVar2) = 0;
    }
  }
  *(uint *)(param_4 + 0x307e8) = uVar12;
  *(uint *)(param_4 + 0x307f0) = uVar6;
  if (uVar12 == 0x62) {
    (**(code **)(*(long *)(param_4 + 0x30708) + 0x18))((long *)(param_4 + 0x30708));
    uVar6 = FUN_006bd550(*(undefined8 *)(param_4 + 0x30710),0);
    iVar2 = *(int *)(param_4 + 0x305b0);
    if (iVar2 == 0) goto LAB_008bfbd8;
    uVar13 = 0;
    iVar10 = iVar2 + -1;
    if (iVar10 == 0 || iVar2 < 1) {
      lVar11 = *(long *)(param_4 + 0x305b8);
    }
    else {
      lVar11 = *(long *)(param_4 + 0x305b8);
      do {
        iVar2 = iVar10 + uVar13;
        if (iVar2 < 0 != SCARRY4(iVar10,uVar13)) {
          iVar2 = iVar2 + 1;
        }
        uVar1 = iVar2 >> 1;
        uVar3 = *(uint *)(*(long *)(lVar11 + (long)(int)uVar1 * 8) + 0x18);
        if (uVar3 == uVar6) goto joined_r0x008bfbc8;
        if (uVar3 < uVar6) {
          uVar13 = uVar1 + 1;
        }
        else {
          iVar10 = uVar1 - 1;
        }
      } while ((int)uVar13 < iVar10);
    }
    uVar1 = uVar13;
    if (*(uint *)(*(long *)(lVar11 + (long)(int)uVar13 * 8) + 0x18) != uVar6) goto LAB_008bfbd8;
joined_r0x008bfbc8:
    if (((int)uVar1 < 0) || (lVar11 = **(long **)(lVar11 + (ulong)uVar1 * 8), lVar11 == 0))
    goto LAB_008bfbd8;
  }
  else {
LAB_008bfbd8:
    local_c0 = CONCAT44(local_c0._4_4_,uVar12);
    if (uVar12 < *(uint *)(param_4 + 0x548)) {
      lVar11 = *(long *)(*(long *)(param_4 + 0x550) + (long)(int)uVar12 * 8);
    }
    else {
      lVar11 = 0;
    }
  }
  uVar12 = *(uint *)(param_4 + 0x307f0);
  if (uVar12 == 0x2a) {
    (**(code **)(*(long *)(param_4 + 0x30740) + 0x18))(param_4 + 0x30740);
    uVar6 = FUN_006bd550(*(undefined8 *)(param_4 + 0x30748),0);
    iVar2 = *(int *)(param_4 + 0x305f0);
    if (iVar2 != 0) {
      uVar13 = 0;
      iVar10 = iVar2 + -1;
      if (iVar10 == 0 || iVar2 < 1) {
        lVar9 = *(long *)(param_4 + 0x305f8);
      }
      else {
        lVar9 = *(long *)(param_4 + 0x305f8);
        do {
          iVar2 = iVar10 + uVar13;
          if (iVar2 < 0 != SCARRY4(iVar10,uVar13)) {
            iVar2 = iVar2 + 1;
          }
          uVar1 = iVar2 >> 1;
          uVar3 = *(uint *)(*(long *)(lVar9 + (long)(int)uVar1 * 8) + 0x18);
          if (uVar3 == uVar6) goto joined_r0x008bfc98;
          if (uVar3 < uVar6) {
            uVar13 = uVar1 + 1;
          }
          else {
            iVar10 = uVar1 - 1;
          }
        } while ((int)uVar13 < iVar10);
      }
      uVar1 = uVar13;
      if (*(uint *)(*(long *)(lVar9 + (long)(int)uVar13 * 8) + 0x18) == uVar6) {
joined_r0x008bfc98:
        if ((-1 < (int)uVar1) && (lVar9 = **(long **)(lVar9 + (ulong)uVar1 * 8), lVar9 != 0))
        goto LAB_008bfcd0;
      }
    }
  }
  local_c0 = CONCAT44(local_c0._4_4_,uVar12);
  if (uVar12 < *(uint *)(param_4 + 0x23028)) {
    lVar9 = *(long *)(*(long *)(param_4 + 0x23030) + (long)(int)uVar12 * 8);
  }
  else {
    lVar9 = 0;
  }
LAB_008bfcd0:
  FUN_008c0a74(&local_c0,lVar11);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar9 + 0xf8) + 0xf0))((long *)(lVar9 + 0xf8));
  uVar4 = *puVar7;
  *(undefined4 *)(param_4 + 0x30950) = 0;
  *(undefined4 *)(param_4 + 0x30954) = uVar4;
  *(undefined8 *)(param_4 + 0x308d0) = *(undefined8 *)(param_4 + 0x30890);
  *(undefined4 *)(param_4 + 0x308dc) = *(undefined4 *)(param_4 + 0x3089c);
  *(undefined4 *)(param_4 + 0x308e0) = *(undefined4 *)(param_4 + 0x308a0);
  *(undefined4 *)(param_4 + 0x3094c) = local_84;
  *(undefined4 *)(param_4 + 0x308d8) = *(undefined4 *)(param_4 + 0x30898);
  *(undefined4 *)(param_4 + 0x30924) = local_ac;
  *(undefined4 *)(param_4 + 0x30928) = uStack_a8;
  *(undefined4 *)(param_4 + 0x3085c) = *(undefined4 *)(param_4 + 0x2b0);
  *(undefined4 *)(param_4 + 0x308ec) = *(undefined4 *)(param_4 + 0x308ac);
  *(undefined4 *)(param_4 + 0x308f0) = *(undefined4 *)(param_4 + 0x308b0);
  *(undefined4 *)(param_4 + 0x3092c) = local_a4;
  *(undefined4 *)(param_4 + 0x30930) = uStack_a0;
  *(undefined8 *)(param_4 + 0x308e4) = *(undefined8 *)(param_4 + 0x308a4);
  *(undefined4 *)(param_4 + 0x30934) = local_9c;
  *(undefined4 *)(param_4 + 0x30938) = uStack_98;
  *(undefined4 *)(param_4 + 0x308f4) = *(undefined4 *)(param_4 + 0x308b4);
  *(undefined4 *)(param_4 + 0x30918) = local_b8;
  *(undefined4 *)(param_4 + 0x3093c) = local_94;
  *(undefined4 *)(param_4 + 0x30940) = uStack_90;
  *(undefined8 *)(param_4 + 0x308f8) = *(undefined8 *)(param_4 + 0x308b8);
  *(undefined4 *)(param_4 + 0x30900) = *(undefined4 *)(param_4 + 0x308c0);
  *(undefined8 *)(param_4 + 0x30904) = *(undefined8 *)(param_4 + 0x308c4);
  *(undefined4 *)(param_4 + 0x30944) = local_8c;
  *(undefined4 *)(param_4 + 0x30948) = uStack_88;
  *(undefined8 *)(param_4 + 0x30854) = *(undefined8 *)(param_4 + 0x2a8);
  *(undefined4 *)(param_4 + 0x30910) = (undefined4)local_c0;
  *(undefined4 *)(param_4 + 0x30914) = local_c0._4_4_;
  *(undefined4 *)(param_4 + 0x3090c) = *(undefined4 *)(param_4 + 0x308cc);
  *(undefined4 *)(param_4 + 0x3091c) = local_b4;
  *(undefined4 *)(param_4 + 0x30920) = uStack_b0;
  if (*(char *)param_6[1] == '\0') {
    *(undefined4 *)(param_4 + 0x30950) = uVar4;
    *(undefined4 *)(param_4 + 0x30890) = (undefined4)local_c0;
    *(undefined4 *)(param_4 + 0x30894) = local_c0._4_4_;
    *(undefined4 *)(param_4 + 0x30898) = local_b8;
    *(undefined4 *)(param_4 + 0x3089c) = local_b4;
    *(undefined4 *)(param_4 + 0x308a0) = uStack_b0;
    *(undefined4 *)(param_4 + 0x308a4) = local_ac;
    *(undefined4 *)(param_4 + 0x308a8) = uStack_a8;
    *(undefined4 *)(param_4 + 0x308ac) = local_a4;
    *(undefined4 *)(param_4 + 0x308b0) = uStack_a0;
    *(undefined4 *)(param_4 + 0x308b4) = local_9c;
    *(undefined4 *)(param_4 + 0x308b8) = uStack_98;
    *(undefined4 *)(param_4 + 0x308bc) = local_94;
    *(undefined4 *)(param_4 + 0x308c0) = uStack_90;
    *(undefined4 *)(param_4 + 0x308c4) = local_8c;
    *(undefined4 *)(param_4 + 0x308c8) = uStack_88;
    *(undefined4 *)(param_4 + 0x308cc) = local_84;
  }
  local_c0 = *(undefined8 *)(param_4 + 0x2a8);
  fVar18 = *(float *)(param_4 + 0x30884);
  local_b8 = *(undefined4 *)(param_4 + 0x2b0);
  if (((!NAN(fVar18)) && (!NAN(*(float *)(param_4 + 0x30888)))) &&
     (fVar19 = *(float *)(param_4 + 0x3088c), !NAN(fVar19))) {
    *(undefined8 *)(param_4 + 0x30884) = 0x7fc000007fc00000;
    *(undefined4 *)(param_4 + 0x3088c) = 0x7fc00000;
    fVar17 = fVar18;
    param_2 = *(float *)(param_4 + 0x30888);
    param_3 = fVar19;
  }
  FUN_008c50d0(fVar17,param_2,param_3,param_4,&local_c0);
  *(undefined4 *)(param_4 + 0x30968) = 2;
  return;
}

