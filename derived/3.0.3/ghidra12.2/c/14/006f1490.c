
void FUN_006f1490(long *param_1)

{
  long *plVar1;
  long *plVar2;
  short *psVar3;
  ushort uVar4;
  undefined7 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  uint uVar8;
  ushort *puVar9;
  long lVar10;
  ushort *puVar11;
  ushort *puVar12;
  long *plVar13;
  undefined7 local_78;
  undefined1 uStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  ushort local_6c;
  ushort local_6a;
  ushort local_68;
  ushort *local_60;
  ushort *local_58;
  
  if ((*(uint *)(param_1 + 0x3d) < 10) &&
     (uVar7 = (**(code **)(*param_1 + 0x28))(), (uVar7 & 1) != 0)) {
    plVar1 = param_1 + 1;
    do {
      uVar8 = *(uint *)(param_1 + 0x3d);
      while( true ) {
        plVar13 = plVar1 + (ulong)uVar8 * 6;
        plVar2 = plVar13;
        if (9 < uVar8) {
          plVar2 = plVar1;
        }
        psVar3 = (short *)*plVar2;
        if (*psVar3 != 0 && psVar3 != (short *)plVar2[1]) break;
        if (uVar8 == 0) {
          param_1[0x3f] = *plVar13;
        }
        else if ((int)uVar8 < 0) goto LAB_006f1728;
        plVar13 = plVar2 + 2;
        uVar7 = (**(code **)(*plVar13 + 0x10))(plVar13);
        if ((uVar7 & 1) != 0) {
          (**(code **)*plVar13)(plVar13);
        }
        *plVar2 = 0;
        plVar2[1] = 0;
        plVar2[2] = (long)&PTR_FUN_048fc6e0;
        lVar10 = param_1[0x3d];
        uVar8 = (int)lVar10 - 1;
        *(uint *)(param_1 + 0x3d) = uVar8;
        if ((int)lVar10 < 1) goto LAB_006f1728;
      }
      if (uVar8 < 10) {
        puVar9 = (ushort *)*plVar13;
        uVar4 = *puVar9;
        if ((uVar4 & 0xfffe) != 0xe) goto LAB_006f1600;
        local_68 = 0;
        local_78 = 0;
        uVar5 = local_78;
        puVar12 = (ushort *)plVar1[(ulong)uVar8 * 6 + 1];
        uStack_71 = 0;
        uVar6 = uStack_71;
        uStack_70 = 0;
        uStack_6f = 0;
        uStack_6e = 0;
        local_60 = (ushort *)0x0;
        local_58 = (ushort *)0x0;
        uStack_71 = (undefined1)((ulong)puVar9 >> 0x38);
        local_78 = SUB87(puVar9,0);
        if (uVar4 != 0xf) {
          if (uVar4 == 0xe) {
            uVar4 = puVar9[3];
            if ((uVar4 & 1) == 0) {
              puVar11 = (ushort *)((long)(puVar9 + 4) + ((ulong)uVar4 & 0xfffe));
              if ((puVar12 == (ushort *)0x0) || (puVar11 <= puVar12)) {
                uStack_6f = 1;
                local_6c = puVar9[1];
                local_6a = puVar9[2];
                lVar10 = 7;
                local_68 = uVar4;
                local_60 = puVar9 + 4;
                goto LAB_006f1650;
              }
            }
          }
LAB_006f16b0:
          uStack_71 = uVar6;
          local_78 = uVar5;
          *(undefined4 *)(param_1 + 0x40) = 1;
LAB_006f16b8:
          uVar8 = *(uint *)(param_1 + 0x3d);
          goto LAB_006f16dc;
        }
        puVar11 = puVar9 + 3;
        if ((puVar12 < puVar11) && (puVar12 != (ushort *)0x0)) goto LAB_006f16b0;
        uStack_6e = 1;
        local_6c = puVar9[1];
        local_6a = puVar9[2];
        lVar10 = 8;
LAB_006f1650:
        param_1[0x3e] = (long)puVar11;
        local_58 = puVar11;
        (**(code **)(*param_1 + lVar10 * 8))(param_1,&local_78);
        uVar5 = local_78;
        uVar6 = uStack_71;
        if (param_1[0x3e] == 0) goto LAB_006f16b0;
        *plVar13 = param_1[0x3e];
        if ((int)param_1[0x40] != 0) goto LAB_006f16b8;
      }
      else {
LAB_006f1600:
        param_1[0x3e] = (long)(psVar3 + 1);
        (**(code **)(*param_1 + 0x30))(param_1);
        *plVar2 = param_1[0x3e];
      }
      uVar7 = (**(code **)(*param_1 + 0x28))(param_1);
    } while ((uVar7 & 1) != 0);
  }
  return;
LAB_006f16dc:
  do {
    plVar2 = plVar1 + (ulong)uVar8 * 6;
    if (9 < uVar8) {
      plVar2 = plVar1;
    }
    if (uVar8 == 0) {
      param_1[0x3f] = plVar1[(ulong)uVar8 * 6];
    }
    else if ((int)uVar8 < 0) break;
    plVar13 = plVar2 + 2;
    uVar7 = (**(code **)(*plVar13 + 0x10))(plVar13);
    if ((uVar7 & 1) != 0) {
      (**(code **)*plVar13)(plVar13);
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2[2] = (long)&PTR_FUN_048fc6e0;
    lVar10 = param_1[0x3d];
    uVar8 = (int)lVar10 - 1;
    *(uint *)(param_1 + 0x3d) = uVar8;
  } while (0 < (int)lVar10);
LAB_006f1728:
                    /* WARNING: Could not recover jumptable at 0x006f174c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}

