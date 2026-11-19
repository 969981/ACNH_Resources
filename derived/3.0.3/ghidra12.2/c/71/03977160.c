
void FUN_03977160(undefined *param_1,long param_2,uint param_3,undefined4 *param_4,long param_5,
                 undefined4 *param_6)

{
  uint *puVar1;
  uint *puVar2;
  ulong uVar3;
  uint uVar4;
  ushort uVar5;
  undefined8 uVar6;
  int iVar7;
  ushort uVar8;
  ushort uVar9;
  char cVar10;
  float fVar11;
  bool bVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  long lVar19;
  undefined4 uVar20;
  long lVar21;
  undefined8 uVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  uint uStack_88;
  long local_80;
  long lStack_78;
  undefined *local_70;
  long lStack_68;
  
  if ((*(uint *)(param_1 + 0xc) & 1) != 0) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  }
  lVar21 = *(long *)(param_1 + 0x20);
  uVar4 = param_3;
  if (*(uint *)(param_1 + 0x18) <= param_3) {
    uVar4 = 0;
  }
  lVar25 = lVar21 + (long)(int)uVar4 * 0x970;
  puVar1 = (uint *)(lVar25 + 0x8d8);
  *(uint *)(lVar25 + 0x8d8) = *(uint *)(lVar25 + 0x8d8) | 4;
  *(undefined4 *)(lVar25 + 0x390) = *param_6;
  *(undefined4 *)(lVar25 + 0x394) = param_6[1];
  *(undefined8 *)(lVar25 + 0x398) = *(undefined8 *)(param_6 + 2);
  *(undefined8 *)(lVar25 + 0x3a0) = *(undefined8 *)(param_6 + 4);
  *(undefined4 *)(lVar25 + 0x3a8) = param_6[6];
  *(undefined4 *)(lVar25 + 0x3ac) = param_6[7];
  *(undefined8 *)(lVar25 + 0x3b0) = *(undefined8 *)(param_6 + 8);
  *(undefined8 *)(lVar25 + 0x3b8) = *(undefined8 *)(param_6 + 10);
  uVar17 = *(undefined8 *)(param_6 + 0xc);
  uVar6 = *(undefined8 *)(param_6 + 0xe);
  uVar22 = *(undefined8 *)(param_6 + 0x10);
  *(undefined8 *)(lVar25 + 0x3d7) = *(undefined8 *)((long)param_6 + 0x47);
  *(undefined8 *)(lVar25 + 0x3d0) = uVar22;
  *(undefined8 *)(lVar25 + 0x3c8) = uVar6;
  *(undefined8 *)(lVar25 + 0x3c0) = uVar17;
  FUN_038fd1e0(lVar25 + 0x3e0);
  FUN_038fd2f0(lVar25 + 0x3e0,param_6 + 0x14);
  uVar20 = param_6[0x26];
  *(undefined8 *)(lVar25 + 0x420) = *(undefined8 *)(param_6 + 0x24);
  puVar2 = (uint *)(lVar25 + 0x464);
  *(undefined4 *)(lVar25 + 0x428) = uVar20;
  do {
    cVar10 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar12) {
      *puVar2 = *puVar2 | 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  lVar26 = lVar21 + (long)(int)uVar4 * 0x970;
  *(undefined4 *)(lVar26 + 0x470) = *param_4;
  *(undefined4 *)(lVar26 + 0x474) = param_4[1];
  *(undefined8 *)(lVar26 + 0x478) = *(undefined8 *)(param_4 + 2);
  *(undefined8 *)(lVar26 + 0x480) = *(undefined8 *)(param_4 + 4);
  *(undefined4 *)(lVar26 + 0x488) = param_4[6];
  *(undefined4 *)(lVar26 + 0x48c) = param_4[7];
  *(undefined8 *)(lVar26 + 0x490) = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(lVar26 + 0x498) = *(undefined8 *)(param_4 + 10);
  uVar22 = *(undefined8 *)(param_4 + 0x10);
  uVar17 = *(undefined8 *)(param_4 + 0xc);
  uVar6 = *(undefined8 *)(param_4 + 0xe);
  *(undefined8 *)(lVar26 + 0x4b7) = *(undefined8 *)((long)param_4 + 0x47);
  *(undefined8 *)(lVar26 + 0x4b0) = uVar22;
  *(undefined8 *)(lVar26 + 0x4a8) = uVar6;
  *(undefined8 *)(lVar26 + 0x4a0) = uVar17;
  FUN_038fd1e0(lVar26 + 0x4c0);
  FUN_038fd2f0(lVar26 + 0x4c0,param_4 + 0x14);
  uVar20 = param_4[0x26];
  *(undefined8 *)(lVar26 + 0x500) = *(undefined8 *)(param_4 + 0x24);
  puVar2 = (uint *)(lVar26 + 0x544);
  *(undefined4 *)(lVar26 + 0x508) = uVar20;
  do {
    cVar10 = '\x01';
    bVar12 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar12) {
      *puVar2 = *puVar2 | 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  uVar13 = *(uint *)(param_1 + 8);
  if ((uVar13 >> 0x14 & 1) == 0) {
    lVar27 = lVar21 + (long)(int)uVar4 * 0x970;
    *(undefined4 *)(lVar27 + 0x788) = *(undefined4 *)(param_5 + 8);
    *(undefined4 *)(lVar27 + 0x78c) = *(undefined4 *)(param_5 + 0xc);
    *(undefined8 *)(lVar27 + 0x790) = *(undefined8 *)(param_5 + 0x10);
    *(undefined8 *)(lVar27 + 0x798) = *(undefined8 *)(param_5 + 0x18);
    *(undefined4 *)(lVar27 + 0x7a0) = *(undefined4 *)(param_5 + 0x20);
    *(undefined4 *)(lVar27 + 0x7a4) = *(undefined4 *)(param_5 + 0x24);
    *(undefined8 *)(lVar27 + 0x7a8) = *(undefined8 *)(param_5 + 0x28);
    *(undefined8 *)(lVar27 + 0x7b0) = *(undefined8 *)(param_5 + 0x30);
    uVar22 = *(undefined8 *)(param_5 + 0x48);
    uVar17 = *(undefined8 *)(param_5 + 0x38);
    uVar6 = *(undefined8 *)(param_5 + 0x40);
    *(undefined8 *)(lVar27 + 1999) = *(undefined8 *)(param_5 + 0x4f);
    *(undefined8 *)(lVar27 + 0x7c8) = uVar22;
    *(undefined8 *)(lVar27 + 0x7c0) = uVar6;
    *(undefined8 *)(lVar27 + 0x7b8) = uVar17;
    FUN_038fd1e0(lVar27 + 0x7d8);
    FUN_038fd2f0(lVar27 + 0x7d8,param_5 + 0x58);
    uVar17 = *(undefined8 *)(param_5 + 0x98);
    *(undefined4 *)(lVar27 + 0x820) = *(undefined4 *)(param_5 + 0xa0);
    *(undefined8 *)(lVar27 + 0x818) = uVar17;
    do {
      cVar10 = '\x01';
      bVar12 = (bool)ExclusiveMonitorPass((undefined4 *)(lVar27 + 0x838),0x10);
      if (bVar12) {
        *(undefined4 *)(lVar27 + 0x838) = 0x7fffffff;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    *(undefined2 *)(lVar27 + 0x83c) = *(undefined2 *)(param_5 + 0xbc);
    *(undefined1 *)(lVar27 + 0x83e) = *(undefined1 *)(param_5 + 0xbe);
    *(undefined1 *)(lVar27 + 0x83f) = *(undefined1 *)(param_5 + 0xbf);
    uVar17 = *(undefined8 *)(param_5 + 0xb0);
    *(undefined8 *)(lVar27 + 0x828) = *(undefined8 *)(param_5 + 0xa8);
    *(undefined8 *)(lVar27 + 0x830) = uVar17;
    lVar27 = lVar21 + (long)(int)uVar4 * 0x970;
    *(undefined8 *)(lVar27 + 0x840) = *(undefined8 *)(param_5 + 0xc0);
    *(undefined4 *)(lVar27 + 0x848) = *(undefined4 *)(param_5 + 200);
    *(undefined4 *)(lVar27 + 0x84c) = *(undefined4 *)(param_5 + 0xcc);
    *(undefined8 *)(lVar27 + 0x850) = *(undefined8 *)(param_5 + 0xd0);
    *(undefined8 *)(lVar27 + 0x858) = *(undefined8 *)(param_5 + 0xd8);
    uVar13 = *(uint *)(param_1 + 8);
  }
  if ((uVar13 >> 0x14 & 1) == 0) {
    if ((*(byte *)puVar1 & 1) == 0) {
      uVar8 = *(ushort *)(param_5 + 0x38);
      uVar9 = *(ushort *)(param_5 + 0x3a);
      if (uVar8 < 2) {
        uVar8 = 1;
      }
      uVar5 = uVar9;
      if (*(short *)(param_5 + 0x42) != 3) {
        uVar5 = 1;
      }
      if (uVar5 <= uVar9) {
        uVar5 = uVar9;
      }
      FUN_03976a50(param_1,param_2,param_3,uVar8,uVar5,1,1);
    }
    else {
      if ((*(uint *)(param_1 + 0xc) & 1) != 0) {
        *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
      }
      uVar23 = param_3;
      if (*(uint *)(param_1 + 0x18) <= param_3) {
        uVar23 = 0;
      }
      lVar19 = *(long *)(param_1 + 0x20) + (long)(int)uVar23 * 0x970;
      lVar27 = 0;
      if ((uVar13 & 0x20) != 0) {
        lVar27 = lVar19 + 0x780;
      }
      *(long *)(lVar19 + 0x5b8) = lVar27;
      (**(code **)(*(long *)(lVar19 + 0x558) + 0x38))(lVar19 + 0x558,param_2);
      local_98 = 0xff7fffffff7fffff;
      local_a8 = PTR_DAT_04bd0f08 + 0x10;
      local_a0 = 0x7f7fffff7f7fffff;
      local_90._0_4_ = *(uint *)PTR_DAT_04bd0ea8;
      local_90._4_4_ = 0;
      uStack_88 = 0x3f800000;
      if ((uint)local_90 < 6) {
        if ((1 << (ulong)((uint)local_90 & 0x1f) & 0x39U) == 0) {
          fVar29 = *(float *)(lVar19 + 0x560);
          fVar28 = *(float *)(lVar19 + 0x564);
        }
        else {
          fVar28 = *(float *)(lVar19 + 0x560);
          fVar29 = *(float *)(lVar19 + 0x564);
        }
        fVar31 = fVar28;
        fVar11 = 0.0;
        if (fVar28 <= 0.0) {
          fVar31 = 0.0;
          fVar11 = fVar28;
        }
        fVar30 = fVar29;
        fVar28 = 0.0;
        if (fVar29 <= 0.0) {
          fVar30 = 0.0;
          fVar28 = fVar29;
        }
        local_a0 = CONCAT44(fVar28,fVar11);
        local_98 = CONCAT44(fVar30,fVar31);
      }
      FUN_038e77e4(&local_a8,param_2,lVar19 + 0x558);
    }
  }
  uVar13 = *(uint *)(param_1 + 8);
  lVar27 = lVar21 + (long)(int)uVar4 * 0x970;
  if ((uVar13 >> 0x15 & 1) != 0) {
    lVar19 = *(long *)PTR_DAT_04bd1050;
    if ((*(uint *)(lVar19 + 8) & 3) == 0) {
      uVar13 = *(uint *)(param_1 + 0x7c4);
      bVar12 = (*(uint *)(lVar19 + 8) & 4) != 0;
      if (bVar12) {
        uVar13 = (uint)*(ushort *)(lVar19 + 0xe);
      }
      uVar23 = *(uint *)(param_1 + 0x7c0);
      uVar17 = *(undefined8 *)(param_2 + 0xb8);
      if (bVar12) {
        uVar23 = (uint)*(ushort *)(lVar19 + 0xc);
      }
      (**(code **)PTR_DAT_04bcfdb8)(uVar17,1);
      (**(code **)PTR_DAT_04bcfdc0)(uVar17,uVar23,uVar13);
      uVar13 = *(uint *)(param_1 + 8);
    }
  }
  local_90 = lVar21 + (long)(int)uVar4 * 0x970;
  local_a0 = local_90 + 0x558;
  local_90 = local_90 + 0x238;
  local_70 = param_1 + 0x528;
  local_a8 = param_1;
  local_98 = lVar27;
  uStack_88 = param_3;
  local_80 = lVar26 + 0x470;
  lStack_78 = lVar25 + 0x390;
  lStack_68 = param_2;
  if ((uVar13 >> 0x14 & 1) == 0) {
    uVar23 = param_3;
    if (*(uint *)(param_1 + 0x18) <= param_3) {
      uVar23 = 0;
    }
    lVar26 = *(long *)(param_1 + 0x20) + (long)(int)uVar23 * 0x970;
    lVar25 = *(long *)(lVar21 + (long)(int)uVar4 * 0x970 + 0x5b8);
    *(byte *)(lVar26 + 0x8dd) = (byte)(uVar13 >> 9) & 1;
    *(bool *)(lVar26 + 0x8dc) = lVar25 != 0;
    if (((uVar13 >> 9 & 1) == 0) || ((*(uint *)(param_1 + 8) >> 8 & 1) == 0)) {
      if (lVar25 == 0) {
        puVar15 = param_1 + 0x58;
      }
      else {
        puVar15 = param_1 + 0xcc;
      }
    }
    else if (lVar25 == 0) {
      puVar15 = param_1 + 0x140;
    }
    else {
      puVar15 = param_1 + 0x1b4;
    }
    FUN_038e4d90(puVar15,param_2);
  }
  puVar14 = *(undefined8 **)(param_1 + 0x768);
  if (puVar14 != (undefined8 *)0x0) {
    (**(code **)*puVar14)(puVar14,&local_a8);
  }
  uVar13 = *(uint *)(param_1 + 8);
  if ((uVar13 >> 0x14 & 1) == 0) {
    uVar23 = uStack_88;
    if (*(uint *)(param_1 + 0x18) <= uStack_88) {
      uVar23 = 0;
    }
    lVar26 = *(long *)(param_1 + 0x20) + (long)(int)uVar23 * 0x970;
    lVar25 = *(long *)(local_a0 + 0x60);
    *(byte *)(lVar26 + 0x8dd) = (byte)(uVar13 >> 9) & 1;
    *(bool *)(lVar26 + 0x8dc) = lVar25 != 0;
    if (((uVar13 >> 9 & 1) == 0) || ((*(uint *)(param_1 + 8) >> 8 & 1) == 0)) {
      if (lVar25 == 0) {
        puVar15 = param_1 + 0x58;
      }
      else {
        puVar15 = param_1 + 0xcc;
      }
    }
    else if (lVar25 == 0) {
      puVar15 = param_1 + 0x140;
    }
    else {
      puVar15 = param_1 + 0x1b4;
    }
    FUN_038e4d90(puVar15,param_2);
  }
  uVar13 = (**(code **)(**(long **)(param_1 + 0x28) + 0x58))();
  if (((byte)param_1[0x10] >> (ulong)(uVar13 & 0x1f) & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0x28) + 0x40))
              (*(long **)(param_1 + 0x28),param_2,param_3,lVar27,&local_a8);
  }
  uVar13 = (**(code **)(**(long **)(param_1 + 0x30) + 0x58))();
  if (((byte)param_1[0x10] >> (ulong)(uVar13 & 0x1f) & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0x30) + 0x40))
              (*(long **)(param_1 + 0x30),param_2,param_3,lVar27,&local_a8);
  }
  uVar13 = (**(code **)(**(long **)(param_1 + 0x38) + 0x58))();
  if (((byte)param_1[0x10] >> (ulong)(uVar13 & 0x1f) & 1) != 0) {
    (**(code **)(**(long **)(param_1 + 0x38) + 0x40))
              (*(long **)(param_1 + 0x38),param_2,param_3,lVar27,&local_a8);
  }
  iVar7 = *(int *)(param_1 + 0x40);
  if (iVar7 != 0) {
    lVar25 = *(long *)(param_1 + 0x48);
    uVar24 = 0;
    do {
      plVar16 = *(long **)(lVar25 + (-(uVar24 >> 0x1f) & 0xfffffff800000000 | uVar24 << 3));
      if (plVar16 != (long *)0x0) {
        (**(code **)(*plVar16 + 0x40))(plVar16,param_2,param_3,lVar27,&local_a8);
      }
      uVar3 = uVar24 + 1;
      uVar24 = uVar3 & 0xffffffff;
    } while (iVar7 != (int)uVar3);
  }
  puVar14 = *(undefined8 **)(param_1 + 0x770);
  if (puVar14 != (undefined8 *)0x0) {
    (**(code **)*puVar14)(puVar14,&local_a8);
  }
  uVar13 = *(uint *)(param_1 + 8);
  plVar16 = (long *)PTR_DAT_04bc1010;
  if (((uVar13 >> 0x15 & 1) != 0) && ((*(byte *)(*(long *)PTR_DAT_04bd1050 + 8) & 3) == 0)) {
    (**(code **)PTR_DAT_04bcfdb8)(*(undefined8 *)(param_2 + 0xb8),2);
    uVar13 = *(uint *)(param_1 + 8);
    plVar16 = (long *)PTR_DAT_04bc1010;
  }
  PTR_DAT_04bc1010 = (undefined *)plVar16;
  if ((uVar13 >> 0x14 & 1) != 0) goto LAB_039779d4;
  uVar13 = *(uint *)(lVar21 + (long)(int)uVar4 * 0x970 + 0x618);
  if (uVar13 != 0xffffffff) {
    lVar25 = *plVar16;
    if ((*(uint *)(lVar25 + 0x5c8) >> 3 & 1) == 0) {
      uVar23 = uVar13 - *(ushort *)(lVar25 + 0x3da);
      if (*(uint *)(lVar25 + 0x368) <= uVar23) {
        uVar23 = 0;
      }
      if ((*(uint *)(*(long *)(lVar25 + 0x370) + (long)(int)uVar23 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar13 & 0x3f);
        goto LAB_03977930;
      }
    }
    if ((*(uint *)(lVar25 + 0x5c8) >> 5 & 1) == 0) {
      uVar18 = 0x112;
      uVar20 = 0x12;
    }
    else {
      uVar18 = 0x111;
      uVar20 = 0x11;
    }
    if ((*(uint *)(lVar25 + 800) & 2) != 0) {
      uVar20 = uVar18;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar20);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03977930:
  if ((param_1[9] & 1) != 0) {
    uVar13 = *(uint *)(lVar21 + (long)(int)uVar4 * 0x970 + 0x6f8);
    if (uVar13 != 0xffffffff) {
      lVar25 = *plVar16;
      if ((*(uint *)(lVar25 + 0x5c8) >> 3 & 1) == 0) {
        uVar23 = uVar13 - *(ushort *)(lVar25 + 0x3da);
        if (*(uint *)(lVar25 + 0x368) <= uVar23) {
          uVar23 = 0;
        }
        if ((*(uint *)(*(long *)(lVar25 + 0x370) + (long)(int)uVar23 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar13 & 0x3f);
          goto LAB_039779d4;
        }
      }
      if ((*(uint *)(lVar25 + 0x5c8) >> 5 & 1) == 0) {
        uVar18 = 0x112;
        uVar20 = 0x12;
      }
      else {
        uVar18 = 0x111;
        uVar20 = 0x11;
      }
      if ((*(uint *)(lVar25 + 800) & 2) != 0) {
        uVar20 = uVar18;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar20);
      *(undefined8 *)(param_2 + 0x100) = 0;
    }
  }
LAB_039779d4:
  *(undefined8 *)(lVar21 + (long)(int)uVar4 * 0x970 + 0x5b8) = 0;
  if ((*(uint *)(param_1 + 0xc) & 1) != 0) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 2;
  }
  if ((*puVar1 >> 1 & 1) != 0) {
    *puVar1 = *puVar1 & 0xfffffff8;
  }
  return;
}

