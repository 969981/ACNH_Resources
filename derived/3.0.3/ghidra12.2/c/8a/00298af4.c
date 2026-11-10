
void FUN_00298af4(undefined8 param_1,ulong *param_2)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  byte *pbVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  undefined4 local_68;
  ErrorResultVariant aEStack_64 [12];
  undefined8 local_58;
  undefined1 local_50;
  int local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  uVar7 = FUN_00291260();
  if ((uVar7 & 1) == 0) {
    local_44 = 0x10c0c;
LAB_00298bbc:
    local_58 = (ulong)local_58._4_4_ << 0x20;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_58);
  }
  else {
    uVar7 = FUN_002913b0();
    if ((uVar7 & 1) == 0) {
      local_44 = 0x10c08;
      goto LAB_00298bbc;
    }
    if (DAT_04c60f48 != (byte *)0x0) {
      local_44 = 0x10c0f;
      goto LAB_00298bbc;
    }
    plVar8 = (long *)*param_2;
    if (plVar8 == (long *)0x0) {
LAB_00298bb4:
      local_44 = 0x10c07;
      goto LAB_00298bbc;
    }
    if ((int)param_2[1] != 0) {
      uVar7 = (**(code **)(*plVar8 + 0x38))();
      if ((uVar7 & 1) == 0) goto LAB_00298bb4;
      plVar8 = (long *)*param_2;
    }
    uVar1 = *(ushort *)((long)param_2 + 0xc);
    uVar5 = (**(code **)(*plVar8 + 0xe8))();
    if (uVar5 < uVar1) goto LAB_00298bb4;
    bVar4 = *(byte *)((long)param_2 + 0xe);
    bVar3 = (**(code **)(*(long *)*param_2 + 0xf0))();
    if (bVar3 < bVar4) goto LAB_00298bb4;
    local_44 = 0;
    local_58 = local_58 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_58);
    local_68 = CONCAT13(local_68._3_1_,0x10000);
    local_68 = CONCAT31(CONCAT21(local_68._2_2_,DAT_04be24da),DAT_04be24d8);
    FUN_00268ad8(&local_58,&local_68);
    FUN_00229780(&local_44,&local_58);
    if (local_44 == 0) {
      local_58 = *param_2;
      local_50 = (int)param_2[1] == 1;
      FUN_00268b50(&local_68,&local_58);
      FUN_00229780(&local_44,&local_68);
      if (local_44 == 0) {
        pbVar9 = DAT_04c60f48;
        if (DAT_04c60f48 == (byte *)0x0) {
          pbVar9 = (byte *)FUN_00299140();
          DAT_04c60f50 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            FUN_00299698(pbVar9,param_2);
            pbVar9[0x162] = 0;
            DAT_04c60f48 = pbVar9;
            uVar10 = (**(code **)(*(long *)*param_2 + 0x230))
                               ((long *)*param_2,*(undefined2 *)((long)param_2 + 0xc));
            *(undefined8 *)(DAT_04c60f48 + 0x178) = uVar10;
            uVar10 = (**(code **)(*(long *)*param_2 + 0x280))
                               ((long *)*param_2,*(undefined1 *)((long)param_2 + 0xe));
            *(undefined8 *)(DAT_04c60f48 + 0x188) = uVar10;
            uVar10 = (**(code **)(*(long *)*param_2 + 0x238))();
            *(undefined8 *)(DAT_04c60f48 + 0x168) = uVar10;
            uVar1 = *(ushort *)(DAT_04c61168 + 0x58);
            uVar7 = (**(code **)(*(long *)*param_2 + 0x1a8))();
            pbVar9 = DAT_04c60f48;
            if ((uVar7 & 1) == 0) {
              uVar10 = 0;
              pbVar9[0x170] = 0;
              pbVar9[0x171] = 0;
              pbVar9[0x172] = 0;
              pbVar9[0x173] = 0;
              pbVar9[0x174] = 0;
              pbVar9[0x175] = 0;
              pbVar9[0x176] = 0;
              pbVar9[0x177] = 0;
LAB_00298da4:
              *(undefined8 *)(pbVar9 + 0x70) = uVar10;
            }
            else {
              uVar10 = (**(code **)(*(long *)*param_2 + 0x238))();
              pbVar9 = DAT_04c60f48;
              *(undefined8 *)(DAT_04c60f48 + 0x170) = uVar10;
              if (*(long *)(pbVar9 + 0x70) == 0) {
                uVar10 = (**(code **)(*(long *)*param_2 + 0x1e8))();
                pbVar9 = DAT_04c60f48;
                goto LAB_00298da4;
              }
            }
            if (*(long *)(pbVar9 + 0xb8) == 0) {
              uVar10 = FUN_00299180();
              *(undefined8 *)(DAT_04c60f48 + 0xb8) = uVar10;
            }
            uVar6 = FUN_002991b0(DAT_04c61168,0);
            *(undefined4 *)(DAT_04c60f48 + 0xc0) = uVar6;
            uVar10 = FUN_002ab090(DAT_04c61168 + 0x10,uVar6,0x94);
            pbVar9 = DAT_04c60f48;
            *(undefined8 *)(DAT_04c60f48 + 200) = uVar10;
            FUN_002917a0(&local_68,*(undefined8 *)(pbVar9 + 0xb8),uVar1);
            FUN_00229780(&local_44,&local_68);
            FUN_002a10c0(&local_68,*(undefined8 *)(DAT_04c60f48 + 200),uVar1);
            FUN_00229780(&local_44,&local_68);
            if (*(long *)(DAT_04c60f48 + 0x10) == 0) {
              uVar10 = FUN_00299250();
              pbVar9 = DAT_04c60f48;
              *(undefined8 *)(DAT_04c60f48 + 0x10) = uVar10;
              if (*(long *)(pbVar9 + 0x18) != 0) goto LAB_00298e40;
LAB_00298efc:
              uVar10 = (**(code **)(*(long *)*param_2 + 0x1b0))();
              pbVar9 = DAT_04c60f48;
              *(undefined8 *)(DAT_04c60f48 + 0x18) = uVar10;
              if (*(long *)(pbVar9 + 0x20) != 0) goto LAB_00298e48;
LAB_00298f1c:
              uVar10 = (**(code **)(*(long *)*param_2 + 0x1b8))();
              pbVar9 = DAT_04c60f48;
              *(undefined8 *)(DAT_04c60f48 + 0x20) = uVar10;
              if (*(long *)(pbVar9 + 0x28) != 0) goto LAB_00298e50;
LAB_00298f3c:
              uVar10 = (**(code **)(*(long *)*param_2 + 0x1c0))();
              pbVar9 = DAT_04c60f48;
              *(undefined8 *)(DAT_04c60f48 + 0x28) = uVar10;
              if (*(long *)(pbVar9 + 0x30) != 0) goto LAB_00298e58;
LAB_00298f5c:
              uVar10 = (**(code **)(*(long *)*param_2 + 0x1c8))();
              pbVar9 = DAT_04c60f48;
              *(undefined8 *)(DAT_04c60f48 + 0x30) = uVar10;
              if (*(long *)(pbVar9 + 0x38) != 0) goto LAB_00298e60;
LAB_00298f7c:
              uVar10 = (**(code **)(*(long *)*param_2 + 0x1d0))();
              pbVar9 = DAT_04c60f48;
              *(undefined8 *)(DAT_04c60f48 + 0x38) = uVar10;
              if (*(long *)(pbVar9 + 0x40) != 0) goto LAB_00298e68;
LAB_00298f9c:
              uVar10 = (**(code **)(*(long *)*param_2 + 0x1d8))();
              pbVar9 = DAT_04c60f48;
              *(undefined8 *)(DAT_04c60f48 + 0x40) = uVar10;
              if (*(long *)(pbVar9 + 0x48) != 0) goto LAB_00298e70;
LAB_00298fbc:
              uVar10 = FUN_00299280();
              pbVar9 = DAT_04c60f48;
              *(undefined8 *)(DAT_04c60f48 + 0x48) = uVar10;
              if (*(long *)(pbVar9 + 0x50) != 0) goto LAB_00298e78;
LAB_00298fd0:
              uVar10 = FUN_002992b0();
              pbVar9 = DAT_04c60f48;
              *(undefined8 *)(DAT_04c60f48 + 0x50) = uVar10;
              if (*(long *)(pbVar9 + 0x58) != 0) goto LAB_00298e80;
LAB_00298fe4:
              uVar10 = (**(code **)(*(long *)*param_2 + 0x260))();
              pbVar9 = DAT_04c60f48;
              *(undefined8 *)(DAT_04c60f48 + 0x58) = uVar10;
              if (*(long *)(pbVar9 + 0x60) != 0) goto LAB_00298e88;
LAB_00299004:
              uVar10 = (**(code **)(*(long *)*param_2 + 0x268))();
              pbVar9 = DAT_04c60f48;
              *(undefined8 *)(DAT_04c60f48 + 0x60) = uVar10;
              if (*(long *)(pbVar9 + 0x68) != 0) goto LAB_00298e90;
LAB_00299024:
              uVar10 = (**(code **)(*(long *)*param_2 + 0x270))();
              pbVar9 = DAT_04c60f48;
              *(undefined8 *)(DAT_04c60f48 + 0x68) = uVar10;
              if (*(long *)(pbVar9 + 0x78) != 0) goto LAB_00298e98;
LAB_00299044:
              uVar10 = (**(code **)(*(long *)*param_2 + 0x1e0))();
              pbVar9 = DAT_04c60f48;
              *(undefined8 *)(DAT_04c60f48 + 0x78) = uVar10;
              if (*(long *)(pbVar9 + 0x88) != 0) goto LAB_00298ea0;
LAB_00299064:
              uVar10 = (**(code **)(*(long *)*param_2 + 0x278))();
              pbVar9 = DAT_04c60f48;
              *(undefined8 *)(DAT_04c60f48 + 0x88) = uVar10;
              lVar12 = *(long *)(pbVar9 + 8);
            }
            else {
              pbVar9 = DAT_04c60f48;
              if (*(long *)(DAT_04c60f48 + 0x18) == 0) goto LAB_00298efc;
LAB_00298e40:
              if (*(long *)(pbVar9 + 0x20) == 0) goto LAB_00298f1c;
LAB_00298e48:
              if (*(long *)(pbVar9 + 0x28) == 0) goto LAB_00298f3c;
LAB_00298e50:
              if (*(long *)(pbVar9 + 0x30) == 0) goto LAB_00298f5c;
LAB_00298e58:
              if (*(long *)(pbVar9 + 0x38) == 0) goto LAB_00298f7c;
LAB_00298e60:
              if (*(long *)(pbVar9 + 0x40) == 0) goto LAB_00298f9c;
LAB_00298e68:
              if (*(long *)(pbVar9 + 0x48) == 0) goto LAB_00298fbc;
LAB_00298e70:
              if (*(long *)(pbVar9 + 0x50) == 0) goto LAB_00298fd0;
LAB_00298e78:
              if (*(long *)(pbVar9 + 0x58) == 0) goto LAB_00298fe4;
LAB_00298e80:
              if (*(long *)(pbVar9 + 0x60) == 0) goto LAB_00299004;
LAB_00298e88:
              if (*(long *)(pbVar9 + 0x68) == 0) goto LAB_00299024;
LAB_00298e90:
              if (*(long *)(pbVar9 + 0x78) == 0) goto LAB_00299044;
LAB_00298e98:
              if (*(long *)(pbVar9 + 0x88) == 0) goto LAB_00299064;
LAB_00298ea0:
              lVar12 = *(long *)(pbVar9 + 8);
            }
            if (lVar12 == 0) {
              uVar10 = (**(code **)(*(long *)*param_2 + 0x240))();
              *(undefined8 *)(DAT_04c60f48 + 8) = uVar10;
            }
            bVar4 = (**(code **)(*(long *)*param_2 + 0x100))();
            pbVar9 = DAT_04c60f48;
            *DAT_04c60f48 = bVar4 & 1;
            if (*(long *)(pbVar9 + 0x148) == 0) {
              uVar10 = FUN_002992e0();
              pbVar9 = DAT_04c60f48;
              *(undefined8 *)(DAT_04c60f48 + 0x148) = uVar10;
              if (*(long *)(pbVar9 + 0x1d8) != 0) goto LAB_00298ed4;
LAB_002990b4:
              uVar10 = FUN_00299310((uint)uVar1 * 3);
              pbVar9 = DAT_04c60f48;
              *(undefined8 *)(DAT_04c60f48 + 0x1d8) = uVar10;
              FUN_002993a0(pbVar9 + 0x198,uVar1,uVar10);
              pbVar9 = DAT_04c60f48;
              if (*(long *)(DAT_04c60f48 + 0x268) != 0) goto LAB_00298edc;
LAB_002990e0:
              uVar10 = FUN_00299410();
              pbVar9 = DAT_04c60f48;
              *(undefined8 *)(DAT_04c60f48 + 0x268) = uVar10;
              lVar12 = *(long *)(pbVar9 + 0x220);
            }
            else {
              if (*(long *)(pbVar9 + 0x1d8) == 0) goto LAB_002990b4;
LAB_00298ed4:
              if (*(long *)(pbVar9 + 0x268) == 0) goto LAB_002990e0;
LAB_00298edc:
              lVar12 = *(long *)(pbVar9 + 0x220);
            }
            if (lVar12 == 0) {
              iVar2 = (uint)uVar1 * 4 + -4;
              uVar10 = FUN_00299440(((ulong)(uint)(iVar2 * 0xa8) + 0x93) / 0x94);
              pbVar9 = DAT_04c60f48;
              *(undefined8 *)(DAT_04c60f48 + 0x220) = uVar10;
              FUN_002995c0(pbVar9 + 0x228,iVar2,uVar10);
              pbVar9 = DAT_04c60f48;
            }
            goto LAB_00298c8c;
          }
          local_68 = 0x10c01;
        }
        else {
LAB_00298c8c:
          pbVar9[0xd0] = 0;
          pbVar9[0xd1] = 0;
          pbVar9[0xd2] = 0;
          pbVar9[0xd3] = 0;
          local_68 = 0;
        }
        local_34 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_34);
        piVar11 = &local_68;
        goto LAB_00298bd8;
      }
    }
  }
  piVar11 = &local_44;
LAB_00298bd8:
  FUN_002296c4(param_1,piVar11);
  return;
}

