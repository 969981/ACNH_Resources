
undefined8 FUN_008e52f0(long param_1,ulong param_2,long *param_3,int param_4)

{
  long lVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *__src;
  char *pcVar6;
  undefined4 *puVar7;
  long lVar8;
  uint uVar9;
  void *__dest;
  undefined8 *__dest_00;
  void *__src_00;
  uint uVar10;
  char *pcVar11;
  
  puVar4 = PTR_s_cDefault_04bb5888;
  if (*(char *)param_3[1] == '\0') {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    do {
      pcVar11 = "";
      if (uVar9 < 0x2b) {
        pcVar11 = *(char **)(puVar4 + (ulong)uVar9 * 8 + 0x278);
      }
      (**(code **)(*param_3 + 0x18))(param_3);
      pcVar6 = (char *)param_3[1];
      if (pcVar11 == pcVar6) {
LAB_008e53fc:
        if (uVar9 != 0x2a) goto LAB_008e54b4;
        break;
      }
      if (*pcVar11 == *pcVar6) {
        if (*pcVar11 == '\0') goto LAB_008e53fc;
        lVar8 = 0x7fffe;
        while( true ) {
          if (pcVar11[1] != pcVar6[1]) break;
          if (pcVar11[1] == '\0') goto LAB_008e53fc;
          if (pcVar11[2] != pcVar6[2]) break;
          if (pcVar11[2] == '\0') goto LAB_008e53fc;
          if ((lVar8 == 0) || (cVar3 = pcVar11[3], cVar3 != pcVar6[3])) break;
          lVar8 = lVar8 + -3;
          pcVar6 = pcVar6 + 3;
          pcVar11 = pcVar11 + 3;
          if (cVar3 == '\0') goto LAB_008e53fc;
        }
      }
      uVar10 = 0x2b;
      if ((int)uVar9 < 0x2b) {
        uVar10 = uVar9 + 1;
      }
      uVar9 = uVar10;
    } while (uVar10 != 0x2b);
    __dest = *(void **)(param_1 + 0x30748);
    (**(code **)(*param_3 + 0x18))(param_3);
    __src_00 = (void *)param_3[1];
    if (__dest != __src_00) {
      (**(code **)(*param_3 + 0x18))(param_3);
      lVar8 = 0;
      do {
        if (*(char *)(param_3[1] + lVar8) == '\0') goto LAB_008e5488;
        lVar1 = param_3[1] + lVar8;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_008e5488;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_008e5488;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_008e5488:
      iVar2 = (int)lVar8;
      if (*(int *)(param_1 + 0x30750) <= (int)lVar8) {
        iVar2 = *(int *)(param_1 + 0x30750) + -1;
      }
      memcpy(__dest,__src_00,(long)iVar2);
      *(undefined1 *)((long)__dest + (long)iVar2) = 0;
    }
    uVar9 = 0x2a;
  }
LAB_008e54b4:
  if ((*(int *)(param_1 + 0x410) == 0x21) || (*(int *)(param_1 + 0x31080) < 1)) {
    uVar5 = 0;
  }
  else {
    *(uint *)(param_1 + 0x307f4) = uVar9;
    *(undefined2 *)(param_1 + 0x37fac) = 0x101;
    if (uVar9 == 0x2a) {
      (**(code **)(*(long *)(param_1 + 0x30740) + 0x18))((long *)(param_1 + 0x30740));
      __src = *(undefined8 **)(param_1 + 0x30748);
    }
    else {
      __src = &DAT_0407ebb1;
    }
    __dest_00 = *(undefined8 **)(param_1 + 0x30780);
    if (__dest_00 != __src) {
      lVar8 = 0;
      do {
        if (*(char *)((long)__src + lVar8) == '\0') goto LAB_008e5570;
        if (*(char *)((long)__src + lVar8 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_008e5570;
        }
        if (*(char *)((long)__src + lVar8 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_008e5570;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_008e5570:
      iVar2 = (int)lVar8;
      if (*(int *)(param_1 + 0x30788) <= (int)lVar8) {
        iVar2 = *(int *)(param_1 + 0x30788) + -1;
      }
      memcpy(__dest_00,__src,(long)iVar2);
      *(undefined1 *)((long)__dest_00 + (long)iVar2) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x31080);
    if (iVar2 < 1) {
      puVar7 = (undefined4 *)(param_1 + 0x410);
    }
    else {
      puVar7 = *(undefined4 **)(*(long *)(param_1 + 0x31088) + (ulong)(iVar2 - 1) * 8);
    }
    FUN_03ebb160(param_1 + 0x408,*puVar7);
    *(undefined1 *)(param_1 + 0x37fac) = 0;
    if (-1 < param_4) {
      *(int *)(param_1 + 0x30954) = param_4;
    }
    if ((param_2 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30950) = *(undefined4 *)(param_1 + 0x30954);
      *(undefined4 *)(param_1 + 0x3089c) = *(undefined4 *)(param_1 + 0x3091c);
      *(undefined4 *)(param_1 + 0x308a0) = *(undefined4 *)(param_1 + 0x30920);
      *(undefined8 *)(param_1 + 0x30890) = *(undefined8 *)(param_1 + 0x30910);
      *(undefined4 *)(param_1 + 0x308b4) = *(undefined4 *)(param_1 + 0x30934);
      *(undefined4 *)(param_1 + 0x308b8) = *(undefined4 *)(param_1 + 0x30938);
      *(undefined4 *)(param_1 + 0x30898) = *(undefined4 *)(param_1 + 0x30918);
      *(undefined4 *)(param_1 + 0x308bc) = *(undefined4 *)(param_1 + 0x3093c);
      *(undefined4 *)(param_1 + 0x308c0) = *(undefined4 *)(param_1 + 0x30940);
      *(undefined8 *)(param_1 + 0x308a4) = *(undefined8 *)(param_1 + 0x30924);
      *(undefined8 *)(param_1 + 0x308ac) = *(undefined8 *)(param_1 + 0x3092c);
      *(undefined4 *)(param_1 + 0x308cc) = *(undefined4 *)(param_1 + 0x3094c);
      *(undefined8 *)(param_1 + 0x308c4) = *(undefined8 *)(param_1 + 0x30944);
    }
    uVar5 = 1;
  }
  return uVar5;
}

