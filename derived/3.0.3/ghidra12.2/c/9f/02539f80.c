
/* WARNING: Removing unreachable block (ram,0x0253a0f0) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff24 : 0x0253a0c8 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02539f80(long param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  short sVar4;
  undefined *puVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  float local_128;
  float local_124;
  float fStack_120;
  undefined2 local_116;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined *local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  byte local_f0 [5];
  int local_eb;
  undefined2 local_e7;
  int local_e5;
  undefined2 local_e1;
  undefined2 local_dc;
  undefined1 local_da;
  undefined1 local_d9;
  undefined2 local_d8;
  undefined1 local_d6;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 local_78;
  undefined4 local_70;
  undefined1 local_6c;
  
  puVar5 = PTR_DAT_04bb37e0;
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 != -1) {
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
    if (0xff < (uint)(int)sVar4) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if (((*(uint *)(puVar2 + 4) & 1) != 0) && (iVar3 = *(int *)(param_1 + 0x2390), 0 < iVar3)) {
      iVar8 = 0;
      puVar2 = PTR_DAT_04bb2010 + 0x10;
      do {
        iVar7 = 0;
        if (*(int *)(param_1 + 0x2388) <= iVar8 + *(int *)(param_1 + 0x238c)) {
          iVar7 = *(int *)(param_1 + 0x2388);
        }
        local_f0[1] = 0;
        local_f0[2] = 0;
        local_dc = 0;
        local_128 = 1.4013e-45;
        local_f0[0] = *PTR_DAT_04bb32e0;
        if (7 < local_f0[0]) {
          local_f0[0] = 0xff;
        }
        local_dc = 2;
        local_d8 = 1;
        local_d6 = 0;
        lVar1 = *(long *)(param_1 + 0x2380) + (long)(iVar8 + (*(int *)(param_1 + 0x238c) - iVar7));
        local_da = 0;
        local_f0[3] = 0x6f;
        local_f0[4] = 0;
        local_110 = *(undefined4 *)puVar5;
        uStack_10c = *(undefined4 *)(puVar5 + 4);
        local_78 = 0;
        local_d9 = 0;
        local_d0 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        uStack_100 = 0;
        local_f8 = 0;
        local_108 = puVar2;
        uVar6 = FUN_014afce4(*(undefined8 *)PTR_DAT_04bb4770,&local_110,lVar1);
        if ((uVar6 & 1) != 0) {
          FUN_0253a21c(&local_128,lVar1,&local_108,&local_110,local_f8);
          local_6c = 1;
          iVar7 = (int)(local_124 * 4.0);
          local_eb = (int)(local_128 * 999.99994);
          if (0x7ffe < iVar7) {
            iVar7 = 0x7fff;
          }
          if (iVar7 < -0x7fff) {
            iVar7 = -0x8000;
          }
          local_e7 = (undefined2)iVar7;
          local_e5 = (int)(fStack_120 * 999.99994);
          local_e1 = local_116;
          local_70 = 0x1010001;
          FUN_02558ce0(lVar1,local_f0,&local_70);
        }
        iVar8 = iVar8 + 1;
      } while (iVar3 != iVar8);
      *(undefined8 *)(param_1 + 0x238c) = 0;
    }
  }
  return;
}

