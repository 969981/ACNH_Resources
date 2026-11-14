
uint FUN_01bdf6c0(long *param_1)

{
  long *plVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  short *psVar10;
  undefined *puVar11;
  long lVar12;
  long *plVar13;
  undefined4 local_80 [2];
  short *local_78;
  undefined *local_70;
  long local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  
  plVar13 = *(long **)(*param_1 + 0x30);
  if (plVar13 != (long *)0x0 && *(long *)(*param_1 + 0x70) != 0) {
    uVar3 = FUN_026698a0();
    puVar11 = PTR_DAT_04bb46b0;
    if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
       (lVar5 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,uVar3), lVar5 != 0)) {
      lVar9 = lVar5 + 0x194b0;
      if (*(long *)(lVar5 + 0x194b8) == 0) {
        lVar9 = *(long *)(*(long *)puVar11 + 0x20);
      }
      plVar1 = (long *)(lVar9 + 0x83f0);
      lVar5 = *(long *)(lVar9 + 0x8410);
      if (lVar5 == 0) {
        uVar6 = 0;
      }
      else {
        if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
          lVar5 = *(long *)(lVar9 + 0x8410);
          uVar6 = uVar6 & 0xffffffff;
          if (lVar5 == 0) goto LAB_01bdf7b8;
        }
        plVar7 = *(long **)(lVar5 + 0x20);
        if (plVar7 != (long *)0x0) {
          local_70 = (undefined *)*plVar1;
          local_68 = *(long *)(lVar9 + 0x83f8);
          local_60 = 0x808;
          (**(code **)(*plVar7 + 0x20))(plVar7,&local_70);
        }
      }
LAB_01bdf7b8:
      puVar11 = (undefined *)*plVar1;
      lVar5 = *(long *)(lVar9 + 0x83f8);
      psVar10 = (short *)(puVar11 + lVar5);
      if (*psVar10 == 0) {
LAB_01bdf85c:
        uVar4 = FUN_01bdf2bc(param_1);
      }
      else {
        lVar12 = *(long *)(lVar9 + 0x8410);
        if (lVar12 == 0) {
          if (*(int *)(psVar10 + 0x30) != *DAT_04ccdcc0) goto LAB_01bdf840;
        }
        else {
          plVar7 = *(long **)(lVar12 + 0x20);
          if (plVar7 == (long *)0x0) {
            bVar2 = *(int *)(psVar10 + 0x30) == *DAT_04ccdcc0;
LAB_01bdf88c:
            plVar7 = *(long **)(lVar12 + 0x20);
            if (plVar7 != (long *)0x0) {
              local_60 = 0x808;
              local_70 = puVar11;
              local_68 = lVar5;
              (**(code **)(*plVar7 + 0x20))(plVar7,&local_70);
              psVar10 = (short *)(*(long *)(lVar9 + 0x83f8) + *plVar1);
            }
          }
          else {
            local_60 = 0x808;
            local_70 = puVar11;
            local_68 = lVar5;
            (**(code **)(*plVar7 + 0x20))(plVar7,&local_70);
            puVar11 = (undefined *)*plVar1;
            lVar5 = *(long *)(lVar9 + 0x83f8);
            lVar12 = *(long *)(lVar9 + 0x8410);
            psVar10 = (short *)(puVar11 + lVar5);
            bVar2 = *(int *)(psVar10 + 0x30) == **(int **)PTR_DAT_04bb3448;
            if (lVar12 != 0) goto LAB_01bdf88c;
          }
          if (!bVar2) {
LAB_01bdf840:
            psVar10[0x30] = 0;
            psVar10[0x31] = 0;
            psVar10[0x28] = 0;
            psVar10[0x29] = 0;
            psVar10[0x2a] = 0;
            psVar10[0x2b] = 0;
            psVar10[0x2c] = 0;
            psVar10[0x2d] = 0;
            psVar10[0x2e] = 0;
            psVar10[0x2f] = 0;
            psVar10[0x20] = 0;
            psVar10[0x21] = 0;
            psVar10[0x22] = 0;
            psVar10[0x23] = 0;
            psVar10[0x24] = 0;
            psVar10[0x25] = 0;
            psVar10[0x26] = 0;
            psVar10[0x27] = 0;
            psVar10[0x18] = 0;
            psVar10[0x19] = 0;
            psVar10[0x1a] = 0;
            psVar10[0x1b] = 0;
            psVar10[0x1c] = 0;
            psVar10[0x1d] = 0;
            psVar10[0x1e] = 0;
            psVar10[0x1f] = 0;
            psVar10[0x10] = 0;
            psVar10[0x11] = 0;
            psVar10[0x12] = 0;
            psVar10[0x13] = 0;
            psVar10[0x14] = 0;
            psVar10[0x15] = 0;
            psVar10[0x16] = 0;
            psVar10[0x17] = 0;
            psVar10[8] = 0;
            psVar10[9] = 0;
            psVar10[10] = 0;
            psVar10[0xb] = 0;
            psVar10[0xc] = 0;
            psVar10[0xd] = 0;
            psVar10[0xe] = 0;
            psVar10[0xf] = 0;
            psVar10[0] = 0;
            psVar10[1] = 0;
            psVar10[2] = 0;
            psVar10[3] = 0;
            psVar10[4] = 0;
            psVar10[5] = 0;
            psVar10[6] = 0;
            psVar10[7] = 0;
            goto LAB_01bdf85c;
          }
        }
        local_80[0] = 0x30;
        local_78 = psVar10;
        (**(code **)(*plVar13 + 0x38))(plVar13);
        local_58 = 0;
        uStack_50 = 0;
        local_60 = 0;
        uVar4 = 1;
        local_48 = 1;
        local_44 = 0;
        local_70 = PTR_DAT_04bc0cd8 + 0x10;
        local_68 = 0;
        FUN_02906b00(&local_70,plVar13,local_80);
      }
      if ((((uVar6 & 1) != 0) && (*(long *)(lVar9 + 0x8410) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar9 + 0x8410) + 0x18), puVar8 != (undefined8 *)0x0))
      {
        (**(code **)*puVar8)();
      }
      goto LAB_01bdf764;
    }
  }
  uVar4 = 0;
LAB_01bdf764:
  return uVar4 & 1;
}

