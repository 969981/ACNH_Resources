
void FUN_01b9b810(long *param_1,undefined8 param_2,byte *param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *local_180;
  char *pcStack_178;
  undefined *local_170;
  undefined4 local_168;
  undefined *local_160;
  int local_158;
  undefined1 local_154;
  long local_150;
  long lStack_148;
  long local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 auStack_f8 [56];
  undefined1 auStack_c0 [56];
  undefined1 auStack_88 [56];
  
  uVar5 = (ulong)*param_3;
  if (uVar5 < 0x23) {
    if ((param_3[1] <= (byte)PTR_DAT_04bc27f0[uVar5]) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar5 * 4) >> (ulong)(param_3[1] & 0x1f) & 1) != 0)) {
      iVar3 = (int)param_1[1];
      if ((int)param_1[2] < iVar3) {
        lVar9 = *param_1;
        iVar2 = iVar3;
        if (0 < *(int *)((long)param_1 + 0xc)) {
          iVar2 = *(int *)((long)param_1 + 0xc);
        }
        if (iVar2 <= iVar3) {
          iVar3 = 0;
        }
        *(int *)((long)param_1 + 0xc) = iVar2 + -1;
        *(int *)(param_1 + 2) = (int)param_1[2] + 1;
        lVar8 = lVar9 + (long)((iVar2 + -1) - iVar3) * 0x5b0;
        FUN_01b9a8e4(lVar8);
        if (lVar9 != 0) {
          bVar4 = FUN_020fd7d8(param_3);
          if (bVar4 < 8) {
            puVar10 = *(undefined8 **)(PTR_DAT_04bb6a58 + (ulong)bVar4 * 8 + 0x20);
          }
          else {
            puVar10 = &DAT_0407ebb1;
          }
          FUN_006d8678(auStack_88,"To_%s_%02d",puVar10,param_4);
          FUN_006d8678(auStack_c0,"Msg_%s_%02d",puVar10,param_4);
          FUN_006d8678(auStack_f8,"From_%s_%02d",puVar10,param_4);
          local_168 = 0xb;
          local_170 = PTR_DAT_04bc0b78 + 0x10;
          local_154 = 0;
          local_130 = 0;
          uStack_128 = 0;
          local_100 = 0;
          local_120 = 0;
          uStack_118 = 0;
          local_160 = PTR_DAT_04bc0a78 + 0x10;
          local_110 = 0;
          uStack_108 = 0;
          local_158 = *(int *)PTR_DAT_04bc0b30;
          *(int *)PTR_DAT_04bc0b30 = local_158 + 1;
          lStack_148 = lVar8 + 0x140;
          local_140 = lVar8 + 0x400;
          uStack_138 = 0;
          local_180 = PTR_DAT_04bb2020 + 0x10;
          pcStack_178 = "MAIL_Tkk_BirthdayDemo";
          local_150 = lVar8;
          uVar5 = FUN_01bdc210(&local_170,&local_180,auStack_88,auStack_c0,auStack_f8,param_3,
                               param_2);
          *(undefined1 *)(lVar8 + 0x540) = 0;
          if (((uVar5 & 1) == 0) && (0 < (int)param_1[2])) {
            iVar3 = 0;
            if ((int)param_1[1] <= *(int *)((long)param_1 + 0xc)) {
              iVar3 = (int)param_1[1];
            }
            plVar7 = (long *)(*param_1 + (long)(*(int *)((long)param_1 + 0xc) - iVar3) * 0x5b0);
            FUN_03f45838(plVar7 + 0xb2);
            FUN_03f45838(plVar7 + 0xb2);
            plVar6 = (long *)plVar7[0xb5];
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x20))(plVar6);
              iVar3 = *(int *)((long)plVar7 + 0x59c) + -1;
              if (((*(int *)((long)plVar7 + 0x59c) < 1) ||
                  (*(int *)((long)plVar7 + 0x59c) = iVar3, iVar3 == 0)) && (plVar7[0xb4] != 0)) {
                FUN_03f44508();
                plVar7[0xb4] = 0;
              }
              (**(code **)(*plVar6 + 0x28))(plVar6);
            }
            puVar1 = PTR_DAT_04bb2df8 + 0x10;
            plVar7[0x80] = (long)puVar1;
            plVar7[0x28] = (long)puVar1;
            *plVar7 = (long)puVar1;
            iVar3 = 0;
            if (*(int *)((long)param_1 + 0xc) + 1 < (int)param_1[1]) {
              iVar3 = *(int *)((long)param_1 + 0xc) + 1;
            }
            *(int *)((long)param_1 + 0xc) = iVar3;
            *(int *)(param_1 + 2) = (int)param_1[2] + -1;
          }
        }
      }
    }
  }
  return;
}

