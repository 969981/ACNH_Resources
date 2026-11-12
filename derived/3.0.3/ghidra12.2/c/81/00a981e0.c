
void FUN_00a981e0(long *param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  long *plVar7;
  int iVar8;
  long *plVar9;
  int iVar10;
  undefined *local_98;
  char *local_90;
  undefined *local_88;
  undefined8 *puStack_80;
  undefined *local_78;
  undefined8 *puStack_70;
  uint local_68;
  
  puVar2 = PTR_DAT_04bb3050;
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar6 = PTR_DAT_04bb60a0;
  lVar4 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar4;
  lVar4 = param_2[6];
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar4;
  *param_1 = (long)(puVar6 + 0x10);
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
    puVar6 = &DAT_04b7e788;
  }
  param_1[0xf65] = (long)(param_1 + 0x10ee);
  plVar7 = param_1 + 0xb;
  *plVar7 = (long)(param_1 + 0x194);
  *param_1 = (long)&PTR_LAB_0492f058;
  param_1[0x1277] = (long)(param_1 + 0x1400);
  param_1[0x194] = (long)(param_1 + 0x31d);
  param_1[0x24e3] = (long)(param_1 + 0x266c);
  param_1[0x31d] = (long)(param_1 + 0x4a6);
  param_1[0x27f5] = (long)(param_1 + 0x297e);
  param_1[0x1589] = (long)(param_1 + 0x1712);
  param_1[0x189b] = (long)(param_1 + 0x1a24);
  param_1[0x4a6] = (long)(param_1 + 0x62f);
  param_1[0x1bad] = (long)(param_1 + 0x1d36);
  param_1[0x1ebf] = (long)(param_1 + 0x2048);
  param_1[0x21d1] = (long)(param_1 + 0x235a);
  param_1[0x62f] = (long)(param_1 + 0x7b8);
  param_1[10] = (long)plVar7;
  param_1[0x7b8] = (long)(param_1 + 0x941);
  param_1[0x941] = (long)(param_1 + 0xaca);
  param_1[0xaca] = (long)(param_1 + 0xc53);
  param_1[0xc53] = (long)(param_1 + 0xddc);
  param_1[0xddc] = (long)(param_1 + 0xf65);
  param_1[0x10ee] = (long)(param_1 + 0x1277);
  param_1[0x1400] = (long)(param_1 + 0x1589);
  param_1[0x1712] = (long)(param_1 + 0x189b);
  param_1[0x1a24] = (long)(param_1 + 0x1bad);
  param_1[0x1d36] = (long)(param_1 + 0x1ebf);
  param_1[0x2048] = (long)(param_1 + 0x21d1);
  param_1[0x235a] = (long)(param_1 + 0x24e3);
  param_1[0x266c] = (long)(param_1 + 0x27f5);
  param_1[0x297e] = (long)(param_1 + 0x2b07);
  param_1[0x2b07] = (long)(param_1 + 0x2c90);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x2c90] = (long)(param_1 + 0x2e19);
  param_1[0x2e19] = (long)(param_1 + 0x2fa2);
  param_1[8] = 0;
  param_1[9] = (long)plVar7;
  param_1[0x2fa2] = (long)(param_1 + 0x312b);
  param_1[0x312b] = (long)(param_1 + 0x32b4);
  param_1[0x32b4] = (long)(param_1 + 0x343d);
  param_1[0x343d] = (long)(param_1 + 0x35c6);
  param_1[0x35c6] = (long)(param_1 + 0x374f);
  param_1[0x374f] = (long)(param_1 + 0x38d8);
  param_1[0x38d8] = (long)(param_1 + 0x3a61);
  param_1[0x3a61] = (long)(param_1 + 0x3bea);
  param_1[0x3bea] = 0;
  if (param_1 + 0x3d73 != (long *)0x0) {
    param_1[7] = 0x2800000000;
    param_1[8] = (long)(param_1 + 0x3d73);
  }
  *param_1 = (long)&PTR_LAB_04930d68;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  iVar10 = 0;
  do {
    if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
      plVar7 = (long *)param_1[9];
      if (plVar7 != (long *)0x0) {
        param_1[9] = *plVar7;
      }
      *plVar7 = (long)(puVar2 + 0x10);
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar4 = param_2[1];
      plVar7[2] = 0;
      plVar7[3] = 0;
      plVar7[1] = lVar4;
      lVar4 = param_2[6];
      *plVar7 = (long)&PTR_LAB_04931048;
      plVar7[0xb] = 0;
      plVar7[7] = (long)"mEndMonth";
      plVar7[8] = 0;
      plVar7[9] = (long)plVar7;
      plVar5 = plVar7 + 6;
      *plVar5 = (long)&PTR_LAB_049311a8;
      plVar7[0xc] = (long)&PTR_LAB_049311a8;
      plVar7[5] = (long)plVar5;
      *(undefined4 *)(plVar7 + 10) = 0;
      plVar7[0xf] = 0;
      *(int *)(plVar7 + 4) = (int)lVar4;
      *(undefined4 *)(plVar7 + 0x10) = 0;
      *(undefined1 *)((long)plVar7 + 0x54) = 0xc;
      *(undefined1 *)(plVar7 + 0xb) = 0xc;
      plVar7[0x11] = 0;
      plVar7[0xd] = (long)"mEndDay";
      plVar7[0xe] = 0;
      do {
        plVar9 = plVar5;
        plVar5 = (long *)plVar9[2];
      } while (plVar5 != (long *)0x0);
      plVar9[2] = (long)(plVar7 + 0xc);
      plVar7[0xf] = (long)plVar7;
      puVar3 = (undefined1 *)(**(code **)(plVar7[0xc] + 0xf0))();
      *puVar3 = 0x1f;
      if ((*(uint *)(plVar7 + 0x10) >> 7 & 1) == 0) {
        plVar7[0x11] = 0;
        *(undefined1 *)(plVar7 + 0x11) = 0x1f;
      }
      *(uint *)(plVar7 + 0x10) = *(uint *)(plVar7 + 0x10) & 0xfeffffff;
      local_90 = "mRate";
      local_68 = 0;
      plVar7[0x15] = 0;
      *(undefined4 *)(plVar7 + 0x16) = 0;
      plVar9 = plVar7 + 0x12;
      *plVar9 = (long)(puVar6 + 0x10);
      plVar7[0x17] = 0;
      puStack_80 = &DAT_0407ebb1;
      puStack_70 = &DAT_0407ebb1;
      plVar7[0x13] = (long)"mRate";
      plVar7[0x14] = 0;
      local_98 = puVar1;
      local_88 = puVar1;
      local_78 = puVar1;
      (**(code **)(*plVar7 + 0x140))(plVar7,plVar9);
      plVar5 = plVar7 + 0x1d;
      *plVar5 = (long)(plVar7 + 0x23);
      plVar7[0x14f] = 0;
      plVar7[0x41] = (long)(plVar7 + 0x47);
      plVar7[0x47] = (long)(plVar7 + 0x4d);
      plVar7[0x4d] = (long)(plVar7 + 0x53);
      plVar7[0x53] = (long)(plVar7 + 0x59);
      plVar7[0x1c] = (long)plVar5;
      plVar7[0x59] = (long)(plVar7 + 0x5f);
      plVar7[0x5f] = (long)(plVar7 + 0x65);
      plVar7[0x65] = (long)(plVar7 + 0x6b);
      plVar7[0x6b] = (long)(plVar7 + 0x71);
      plVar7[0x71] = (long)(plVar7 + 0x77);
      plVar7[0x77] = (long)(plVar7 + 0x7d);
      plVar7[0x7d] = (long)(plVar7 + 0x83);
      plVar7[0x83] = (long)(plVar7 + 0x89);
      plVar7[0x89] = (long)(plVar7 + 0x8f);
      plVar7[0x8f] = (long)(plVar7 + 0x95);
      plVar7[0x95] = (long)(plVar7 + 0x9b);
      plVar7[0x9b] = (long)(plVar7 + 0xa1);
      plVar7[0xa1] = (long)(plVar7 + 0xa7);
      plVar7[0xa7] = (long)(plVar7 + 0xad);
      plVar7[0xad] = (long)(plVar7 + 0xb3);
      plVar7[0xb3] = (long)(plVar7 + 0xb9);
      plVar7[0xb9] = (long)(plVar7 + 0xbf);
      plVar7[0xbf] = (long)(plVar7 + 0xc5);
      plVar7[0xc5] = (long)(plVar7 + 0xcb);
      plVar7[0xcb] = (long)(plVar7 + 0xd1);
      plVar7[0xd1] = (long)(plVar7 + 0xd7);
      plVar7[0xd7] = (long)(plVar7 + 0xdd);
      plVar7[0xdd] = (long)(plVar7 + 0xe3);
      plVar7[0xe3] = (long)(plVar7 + 0xe9);
      plVar7[0xe9] = (long)(plVar7 + 0xef);
      plVar7[0xef] = (long)(plVar7 + 0xf5);
      plVar7[0xf5] = (long)(plVar7 + 0xfb);
      plVar7[0xfb] = (long)(plVar7 + 0x101);
      plVar7[0x101] = (long)(plVar7 + 0x107);
      plVar7[0x107] = (long)(plVar7 + 0x10d);
      plVar7[0x10d] = (long)(plVar7 + 0x113);
      plVar7[0x113] = (long)(plVar7 + 0x119);
      plVar7[0x119] = (long)(plVar7 + 0x11f);
      plVar7[0x11f] = (long)(plVar7 + 0x125);
      plVar7[0x125] = (long)(plVar7 + 299);
      plVar7[299] = (long)(plVar7 + 0x131);
      plVar7[0x131] = (long)(plVar7 + 0x137);
      plVar7[0x137] = (long)(plVar7 + 0x13d);
      plVar7[0x13d] = (long)(plVar7 + 0x143);
      plVar7[0x143] = (long)(plVar7 + 0x149);
      plVar7[0x149] = (long)(plVar7 + 0x14f);
      plVar7[0x18] = 0;
      plVar7[0x19] = 0;
      plVar7[0x3b] = (long)(plVar7 + 0x41);
      *plVar9 = (long)&PTR_LAB_04931468;
      plVar7[0x35] = (long)(plVar7 + 0x3b);
      plVar7[0x2f] = (long)(plVar7 + 0x35);
      plVar7[0x29] = (long)(plVar7 + 0x2f);
      plVar7[0x23] = (long)(plVar7 + 0x29);
      plVar7[0x1a] = 0;
      plVar7[0x1b] = (long)plVar5;
      if (plVar7 + 0x155 != (long *)0x0) {
        plVar7[0x1a] = (long)(plVar7 + 0x155);
        plVar7[0x19] = 0x3400000000;
      }
      plVar7[0x12] = (long)&PTR_LAB_049312e8;
      iVar8 = 0x34;
      do {
        if ((int)plVar7[0x19] < *(int *)((long)plVar7 + 0xcc)) {
          plVar5 = (long *)plVar7[0x1b];
          if (plVar5 != (long *)0x0) {
            plVar7[0x1b] = *plVar5;
          }
          *plVar5 = (long)(puVar2 + 0x10);
          (**(code **)(local_98 + 0x18))(&local_98);
          plVar5[3] = 0;
          plVar5[1] = (long)local_90;
          plVar5[2] = 0;
          plVar5[5] = 0;
          *(undefined1 *)((long)plVar5 + 0x24) = 0;
          if ((local_68 >> 7 & 1) == 0) {
            *(undefined1 *)(plVar5 + 5) = 0;
          }
          *plVar5 = (long)&PTR_LAB_049315e8;
          *(uint *)(plVar5 + 4) = local_68 & 0xfeffffff;
          if ((int)plVar7[0x19] < *(int *)((long)plVar7 + 0xcc)) {
            *(long **)(plVar7[0x1a] + (long)(int)plVar7[0x19] * 8) = plVar5;
            *(int *)(plVar7 + 0x19) = (int)plVar7[0x19] + 1;
          }
        }
        else {
          plVar5 = (long *)0x0;
        }
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar9);
        iVar8 = iVar8 + -1;
        *(uint *)(plVar5 + 4) = *(uint *)(plVar5 + 4) & 0xfffffffc;
      } while (iVar8 != 0);
      *plVar7 = (long)&PTR_LAB_04930ee8;
      if ((int)param_1[7] < *(int *)((long)param_1 + 0x3c)) {
        *(long **)(param_1[8] + (long)(int)param_1[7] * 8) = plVar7;
        *(int *)(param_1 + 7) = (int)param_1[7] + 1;
      }
    }
    else {
      plVar7 = (long *)0x0;
    }
    (**(code **)(*plVar7 + 0x38))(plVar7,param_1);
    iVar8 = 0x28;
    if (iVar10 < 0x28) {
      iVar8 = iVar10 + 1;
    }
    *(uint *)(plVar7 + 4) = *(uint *)(plVar7 + 4) & 0xfffffffc;
    iVar10 = iVar8;
  } while (iVar8 != 0x28);
  return;
}

