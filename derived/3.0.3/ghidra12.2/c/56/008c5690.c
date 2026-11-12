
void FUN_008c5690(long param_1,long *param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  char *pcVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  void *__dest;
  char *pcVar16;
  void *__src;
  uint local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  
  if (*(char *)(param_1 + 0x37fac) == '\0') {
    *(undefined1 *)(param_1 + 0x37fad) = 0;
  }
  **(undefined1 **)(param_1 + 0x30748) = 0;
  puVar6 = PTR_s_cDefault_04bb5888;
  uVar7 = 0;
  do {
    pcVar16 = "";
    if (uVar7 < 0x2b) {
      pcVar16 = *(char **)(puVar6 + (ulong)uVar7 * 8 + 0x278);
    }
    (**(code **)(*param_3 + 0x18))(param_3);
    pcVar10 = (char *)param_3[1];
    if (pcVar16 == pcVar10) {
LAB_008c57dc:
      if (uVar7 != 0x2a) goto LAB_008c588c;
      break;
    }
    if (*pcVar16 == *pcVar10) {
      if (*pcVar16 == '\0') goto LAB_008c57dc;
      lVar14 = 0x7fffe;
      while( true ) {
        if (pcVar16[1] != pcVar10[1]) break;
        if (pcVar16[1] == '\0') goto LAB_008c57dc;
        if (pcVar16[2] != pcVar10[2]) break;
        if (pcVar16[2] == '\0') goto LAB_008c57dc;
        if ((lVar14 == 0) || (cVar5 = pcVar16[3], cVar5 != pcVar10[3])) break;
        lVar14 = lVar14 + -3;
        pcVar10 = pcVar10 + 3;
        pcVar16 = pcVar16 + 3;
        if (cVar5 == '\0') goto LAB_008c57dc;
      }
    }
    uVar8 = 0x2b;
    if ((int)uVar7 < 0x2b) {
      uVar8 = uVar7 + 1;
    }
    uVar7 = uVar8;
  } while (uVar8 != 0x2b);
  __dest = *(void **)(param_1 + 0x30748);
  (**(code **)(*param_3 + 0x18))(param_3);
  __src = (void *)param_3[1];
  if (__dest != __src) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar14 = 0;
    do {
      if (*(char *)(param_3[1] + lVar14) == '\0') goto LAB_008c5860;
      lVar11 = param_3[1] + lVar14;
      if (*(char *)(lVar11 + 1) == '\0') {
        lVar14 = lVar14 + 1;
        goto LAB_008c5860;
      }
      if (*(char *)(lVar11 + 2) == '\0') {
        lVar14 = lVar14 + 2;
        goto LAB_008c5860;
      }
      lVar14 = lVar14 + 3;
    } while (lVar14 != 0x80001);
    lVar14 = 0;
LAB_008c5860:
    iVar2 = (int)lVar14;
    if (*(int *)(param_1 + 0x30750) <= (int)lVar14) {
      iVar2 = *(int *)(param_1 + 0x30750) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  uVar7 = 0x2a;
LAB_008c588c:
  uVar8 = *(uint *)(param_1 + 0x307e8);
  *(uint *)(param_1 + 0x307f0) = uVar7;
  if (uVar8 == 0x62) {
    (**(code **)(*(long *)(param_1 + 0x30708) + 0x18))((long *)(param_1 + 0x30708));
    uVar7 = FUN_006bd550(*(undefined8 *)(param_1 + 0x30710),0);
    iVar2 = *(int *)(param_1 + 0x305b0);
    if (iVar2 == 0) goto LAB_008c593c;
    uVar12 = 0;
    iVar13 = iVar2 + -1;
    if (iVar13 == 0 || iVar2 < 1) {
      lVar14 = *(long *)(param_1 + 0x305b8);
    }
    else {
      lVar14 = *(long *)(param_1 + 0x305b8);
      do {
        iVar2 = iVar13 + uVar12;
        if (iVar2 < 0 != SCARRY4(iVar13,uVar12)) {
          iVar2 = iVar2 + 1;
        }
        uVar1 = iVar2 >> 1;
        uVar3 = *(uint *)(*(long *)(lVar14 + (long)(int)uVar1 * 8) + 0x18);
        if (uVar3 == uVar7) goto joined_r0x008c592c;
        if (uVar3 < uVar7) {
          uVar12 = uVar1 + 1;
        }
        else {
          iVar13 = uVar1 - 1;
        }
      } while ((int)uVar12 < iVar13);
    }
    uVar1 = uVar12;
    if (*(uint *)(*(long *)(lVar14 + (long)(int)uVar12 * 8) + 0x18) != uVar7) goto LAB_008c593c;
joined_r0x008c592c:
    if (((int)uVar1 < 0) || (lVar14 = **(long **)(lVar14 + (ulong)uVar1 * 8), lVar14 == 0))
    goto LAB_008c593c;
  }
  else {
LAB_008c593c:
    local_a0 = uVar8;
    if (uVar8 < *(uint *)(param_1 + 0x548)) {
      lVar14 = *(long *)(*(long *)(param_1 + 0x550) + (long)(int)uVar8 * 8);
    }
    else {
      lVar14 = 0;
    }
  }
  uVar7 = *(uint *)(param_1 + 0x307f0);
  if (uVar7 == 0x2a) {
    (**(code **)(*(long *)(param_1 + 0x30740) + 0x18))(param_1 + 0x30740);
    uVar8 = FUN_006bd550(*(undefined8 *)(param_1 + 0x30748),0);
    iVar2 = *(int *)(param_1 + 0x305f0);
    if (iVar2 != 0) {
      uVar12 = 0;
      iVar13 = iVar2 + -1;
      if (iVar13 == 0 || iVar2 < 1) {
        lVar11 = *(long *)(param_1 + 0x305f8);
      }
      else {
        lVar11 = *(long *)(param_1 + 0x305f8);
        do {
          iVar2 = iVar13 + uVar12;
          if (iVar2 < 0 != SCARRY4(iVar13,uVar12)) {
            iVar2 = iVar2 + 1;
          }
          uVar1 = iVar2 >> 1;
          uVar3 = *(uint *)(*(long *)(lVar11 + (long)(int)uVar1 * 8) + 0x18);
          if (uVar3 == uVar8) goto joined_r0x008c59fc;
          if (uVar3 < uVar8) {
            uVar12 = uVar1 + 1;
          }
          else {
            iVar13 = uVar1 - 1;
          }
        } while ((int)uVar12 < iVar13);
      }
      uVar1 = uVar12;
      if (*(uint *)(*(long *)(lVar11 + (long)(int)uVar12 * 8) + 0x18) == uVar8) {
joined_r0x008c59fc:
        if ((-1 < (int)uVar1) && (lVar11 = **(long **)(lVar11 + (ulong)uVar1 * 8), lVar11 != 0))
        goto LAB_008c5a34;
      }
    }
  }
  local_a0 = uVar7;
  if (uVar7 < *(uint *)(param_1 + 0x23028)) {
    lVar11 = *(long *)(*(long *)(param_1 + 0x23030) + (long)(int)uVar7 * 8);
  }
  else {
    lVar11 = 0;
  }
LAB_008c5a34:
  if (*(char *)param_2[1] != '\0') {
    uVar7 = 0;
    do {
      pcVar16 = "";
      if (uVar7 < 0x13) {
        pcVar16 = (&PTR_s_cShopBuyMenu_04923b50)[uVar7];
      }
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar10 = (char *)param_2[1];
      if (pcVar16 == pcVar10) {
LAB_008c5b0c:
        *(uint *)(param_1 + 0x30800) = uVar7;
        *(code **)(param_1 + 0x37f68) = FUN_008c5c98;
        *(undefined8 *)(param_1 + 0x37f70) = 0;
        *(undefined8 *)(param_1 + 0x37f58) = &PTR_LAB_04925a90;
        *(long *)(param_1 + 0x37f60) = param_1;
        goto LAB_008c5b40;
      }
      if (*pcVar16 == *pcVar10) {
        if (*pcVar16 == '\0') goto LAB_008c5b0c;
        lVar15 = 0x7fffe;
        while( true ) {
          if (pcVar16[1] != pcVar10[1]) break;
          if (pcVar16[1] == '\0') goto LAB_008c5b0c;
          if (pcVar16[2] != pcVar10[2]) break;
          if (pcVar16[2] == '\0') goto LAB_008c5b0c;
          if ((lVar15 == 0) || (cVar5 = pcVar16[3], cVar5 != pcVar10[3])) break;
          lVar15 = lVar15 + -3;
          pcVar10 = pcVar10 + 3;
          pcVar16 = pcVar16 + 3;
          if (cVar5 == '\0') goto LAB_008c5b0c;
        }
      }
      uVar8 = 0x13;
      if ((int)uVar7 < 0x13) {
        uVar8 = uVar7 + 1;
      }
      uVar7 = uVar8;
    } while (uVar8 != 0x13);
  }
  *(undefined8 *)(param_1 + 0x37f58) = &PTR_LAB_04925ae0;
LAB_008c5b40:
  FUN_008c0a74(&local_a0,lVar14);
  puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar11 + 0xf8) + 0xf0))((long *)(lVar11 + 0xf8));
  uVar4 = *puVar9;
  *(undefined4 *)(param_1 + 0x308e0) = *(undefined4 *)(param_1 + 0x308a0);
  *(undefined8 *)(param_1 + 0x308d0) = *(undefined8 *)(param_1 + 0x30890);
  *(undefined4 *)(param_1 + 0x30950) = 0;
  *(undefined4 *)(param_1 + 0x30954) = uVar4;
  *(undefined4 *)(param_1 + 0x30928) = uStack_88;
  *(undefined4 *)(param_1 + 0x308dc) = *(undefined4 *)(param_1 + 0x3089c);
  *(undefined4 *)(param_1 + 0x30924) = local_8c;
  *(undefined4 *)(param_1 + 0x308d8) = *(undefined4 *)(param_1 + 0x30898);
  *(undefined4 *)(param_1 + 0x3092c) = local_84;
  *(undefined4 *)(param_1 + 0x30930) = uStack_80;
  *(undefined4 *)(param_1 + 0x3094c) = local_64;
  *(undefined4 *)(param_1 + 0x30934) = local_7c;
  *(undefined4 *)(param_1 + 0x308f0) = *(undefined4 *)(param_1 + 0x308b0);
  *(undefined4 *)(param_1 + 0x308ec) = *(undefined4 *)(param_1 + 0x308ac);
  *(undefined4 *)(param_1 + 0x30938) = uStack_78;
  *(undefined8 *)(param_1 + 0x308e4) = *(undefined8 *)(param_1 + 0x308a4);
  *(undefined4 *)(param_1 + 0x30918) = local_98;
  *(undefined4 *)(param_1 + 0x3093c) = local_74;
  *(undefined4 *)(param_1 + 0x30940) = uStack_70;
  *(undefined4 *)(param_1 + 0x30944) = local_6c;
  *(undefined4 *)(param_1 + 0x30948) = uStack_68;
  *(undefined8 *)(param_1 + 0x30854) = *(undefined8 *)(param_1 + 0x2a8);
  *(undefined4 *)(param_1 + 0x308f4) = *(undefined4 *)(param_1 + 0x308b4);
  *(undefined4 *)(param_1 + 0x3085c) = *(undefined4 *)(param_1 + 0x2b0);
  *(undefined8 *)(param_1 + 0x308f8) = *(undefined8 *)(param_1 + 0x308b8);
  *(undefined4 *)(param_1 + 0x30900) = *(undefined4 *)(param_1 + 0x308c0);
  *(undefined8 *)(param_1 + 0x30904) = *(undefined8 *)(param_1 + 0x308c4);
  *(undefined4 *)(param_1 + 0x3090c) = *(undefined4 *)(param_1 + 0x308cc);
  *(undefined4 *)(param_1 + 0x30920) = uStack_90;
  *(uint *)(param_1 + 0x30910) = local_a0;
  *(undefined4 *)(param_1 + 0x30914) = uStack_9c;
  *(undefined4 *)(param_1 + 0x3091c) = local_94;
  if (*(char *)param_3[1] == '\0') {
    *(undefined4 *)(param_1 + 0x30950) = uVar4;
    *(uint *)(param_1 + 0x30890) = local_a0;
    *(undefined4 *)(param_1 + 0x30894) = uStack_9c;
    *(undefined4 *)(param_1 + 0x30898) = local_98;
    *(undefined4 *)(param_1 + 0x3089c) = local_94;
    *(undefined4 *)(param_1 + 0x308a0) = uStack_90;
    *(undefined4 *)(param_1 + 0x308a4) = local_8c;
    *(undefined4 *)(param_1 + 0x308a8) = uStack_88;
    *(undefined4 *)(param_1 + 0x308ac) = local_84;
    *(undefined4 *)(param_1 + 0x308b0) = uStack_80;
    *(undefined4 *)(param_1 + 0x308b4) = local_7c;
    *(undefined4 *)(param_1 + 0x308b8) = uStack_78;
    *(undefined4 *)(param_1 + 0x308bc) = local_74;
    *(undefined4 *)(param_1 + 0x308c0) = uStack_70;
    *(undefined4 *)(param_1 + 0x308c4) = local_6c;
    *(undefined4 *)(param_1 + 0x308c8) = uStack_68;
    *(undefined4 *)(param_1 + 0x308cc) = local_64;
  }
  return;
}

