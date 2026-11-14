
uint FUN_01c0c050(long *param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  uint uVar2;
  undefined *__s;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  uint *puVar11;
  int *piVar12;
  char cVar13;
  undefined1 auStack_170 [88];
  undefined *local_118;
  undefined1 *local_110;
  undefined4 local_108;
  undefined1 local_104 [63];
  undefined1 local_c5;
  undefined *local_c0;
  undefined1 *puStack_b8;
  undefined4 local_b0;
  undefined1 local_ac [63];
  undefined1 local_6d;
  
  local_6d = 0;
  local_ac[0] = 0;
  local_b0 = 0x40;
  local_108 = 0x40;
  local_110 = local_104;
  puVar10 = *(uint **)(param_2 + 0x10);
  puStack_b8 = local_ac;
  local_c5 = 0;
  local_104[0] = 0;
  local_118 = PTR_DAT_04bb2bc0 + 0x10;
  local_c0 = local_118;
  if (((puVar10 != (uint *)0x0) && (uVar3 = *puVar10, uVar3 != 0)) &&
     (puVar10 != (uint *)(ulong)uVar3)) {
    puVar11 = (uint *)((long)puVar10 - (long)(ulong)uVar3);
    if (((*puVar11 != 0) && (uVar3 = puVar11[1], uVar3 != 0)) && ((ulong)(ushort)puVar11[2] != 0)) {
      lVar6 = 0xc;
      if (*(char *)((long)puVar11 + 10) != '\0') {
        lVar6 = 0x1c;
      }
      lVar6 = (long)puVar11 + lVar6 + (ulong)(ushort)puVar11[2] * 8;
      if (lVar6 != 0) {
        uVar4 = 0;
        if ((ulong)uVar3 != 0) {
          uVar4 = (uint)((ulong)((long)puVar10 - lVar6) / (ulong)uVar3);
        }
        if (*puVar11 <= uVar4) {
          uVar4 = 0xffffffff;
        }
        if ((uVar4 < *(uint *)PTR_DAT_04bc0020) &&
           (0xfa4a < (ushort)(*(short *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar4 * 2) -
                             0x5b6U))) {
          FUN_01ae1310(param_2,&local_c0);
          FUN_01ae1530(param_2,&local_118);
          goto LAB_01c0c194;
        }
      }
    }
  }
  uVar3 = FUN_01b0b8dc(param_2);
  if (uVar3 < 0x28) {
    puVar9 = *(undefined8 **)(PTR_DAT_04bc02a0 + (ulong)uVar3 * 8 + 0x1a0);
  }
  else {
    puVar9 = &DAT_0407ebb1;
  }
  FUN_038d1270(&local_c0,"STR_ItemName_%s",puVar9);
  FUN_01b0b530(param_2,&local_118);
LAB_01c0c194:
  lVar6 = (**(code **)(*param_1 + 0x40))(param_1);
  uVar3 = (**(code **)*param_3)(param_3,lVar6,&local_c0,&local_118,1);
  __s = PTR_DAT_04bbfe90;
  puVar10 = *(uint **)(param_2 + 0x10);
  if (puVar10 == (uint *)0x0) {
    uVar4 = 0xfffe;
  }
  else {
    uVar2 = *puVar10;
    if (uVar2 != 0) {
      cVar13 = *PTR_DAT_04bbfe88;
      do {
        if (cVar13 == '\0') {
          cVar13 = '\x01';
          *PTR_DAT_04bbfe88 = 1;
          memset(__s,0xff,0x1ac);
          uVar2 = *puVar10;
        }
        else {
          uVar4 = *(uint *)(__s + 0x128);
          if (-1 < (int)uVar4) {
            if ((ushort *)((ulong)uVar4 + (long)puVar10) == (ushort *)0x0) break;
            uVar4 = (uint)*(ushort *)((ulong)uVar4 + (long)puVar10);
            goto LAB_01c0c2ec;
          }
          if (uVar4 != 0xffffffff) break;
        }
        puVar11 = (uint *)(ulong)uVar2;
        uVar4 = 0;
        if ((puVar11 == (uint *)0x0) || (uVar4 = 0, puVar10 == puVar11)) goto LAB_01c0c2ec;
        lVar1 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar11)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar10 + (lVar1 - (long)puVar11);
        uVar4 = 0;
        if (lVar1 == 0) goto LAB_01c0c2ec;
        uVar7 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar11));
        *(undefined4 *)(__s + 0x128) = 0xfffffffe;
        if (uVar7 == 0) break;
        piVar12 = (int *)(lVar1 + 4);
        while (piVar12[-1] != 0x54706054) {
          piVar12 = piVar12 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) goto LAB_01c0c2e8;
        }
        uVar4 = 0;
        iVar5 = 0;
        if (*piVar12 != -1) {
          iVar5 = *piVar12;
        }
        *(int *)(__s + 0x128) = iVar5;
        uVar2 = *puVar10;
        if (uVar2 == 0) goto LAB_01c0c2ec;
      } while( true );
    }
LAB_01c0c2e8:
    uVar4 = 0;
  }
LAB_01c0c2ec:
  *(uint *)(lVar6 + 0x18) = uVar4;
  uVar7 = FUN_01af0020(param_2);
  if ((uVar7 & 1) != 0) {
    (**(code **)(local_118 + 0x18))(&local_118);
    FUN_0071b954(auStack_170,"%s_pl",local_110);
    uVar8 = (**(code **)(*param_1 + 0x50))(param_1);
    uVar4 = (**(code **)*param_3)(param_3,uVar8,&local_c0,auStack_170,1);
    uVar3 = uVar3 & uVar4;
    iVar5 = FUN_01af02d0(param_2);
    uVar8 = 1;
    if (iVar5 != 1) {
      uVar8 = 2;
    }
    (**(code **)(*param_1 + 0x30))(param_1,uVar8);
  }
  return uVar3 & 1;
}

