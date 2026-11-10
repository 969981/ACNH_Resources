
void thunk_FUN_0021cb60(undefined8 param_1,long *param_2,ulong param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_34;
  
  puVar6 = &uStack_60;
  if (param_2[10] == 0) {
    uVar8 = param_3 & 0xffffffff;
    uVar1 = *(ushort *)(*(long *)PTR_DAT_04bc1510 + 0x58);
    *(ushort *)(param_2 + 0xc) = uVar1;
    if (uVar1 - 0x21 < 0xffffffe1) {
      uStack_48 = 0;
      uStack_50 = 0x800000000000000;
      (**(code **)(*param_2 + 0x10))(param_2,&uStack_50);
    }
    uVar4 = FUN_0021f454();
    lVar5 = FUN_00285d10(0x6f8,uVar4);
    if (lVar5 == 0) {
      param_2[0xb] = 0;
      uStack_50 = 0x800000000000000;
      uStack_48 = 0;
      (**(code **)(*param_2 + 0x10))(param_2,&uStack_50);
      lVar5 = param_2[0xb];
    }
    else {
      FUN_002a5690();
      param_2[0xb] = lVar5;
    }
    lVar9 = param_2[0xc];
    uVar3 = (**(code **)(*param_2 + 0x18))(param_2);
    FUN_002a57b0(&uStack_50,lVar5,uVar8,uVar8,(short)lVar9,uVar3);
    if ((int)uStack_50 == 0) {
      uVar2 = *(ushort *)(param_2 + 0xc) - 1;
      uVar4 = FUN_0021f454();
      lVar5 = FUN_00285d10((ulong)uVar2 * 0x30,uVar4);
      if ((uVar2 == 0) || (lVar5 == 0)) {
        param_2[10] = lVar5;
        if (lVar5 == 0) {
          uStack_58 = 0;
          uStack_60 = 0x800000000000000;
          (**(code **)(*param_2 + 0x10))(param_2,&uStack_60);
        }
      }
      else {
        lVar9 = 0;
        do {
          puVar7 = (undefined8 *)(lVar5 + lVar9);
          *puVar7 = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[1] = 0;
          memset(puVar7 + 1,0,4);
          lVar9 = lVar9 + 0x30;
        } while ((ulong)uVar2 * 0x30 != lVar9);
        param_2[10] = lVar5;
      }
      *(short *)(param_2 + 0x12) = (short)uVar8;
      uVar4 = FUN_0021f454();
      lVar5 = FUN_00285d10(((param_3 & 0xffff) + (param_3 & 0xffff) * 2) * 4,uVar4);
      if (((param_3 & 0xffff) == 0) || (lVar5 == 0)) {
        param_2[0x11] = lVar5;
        if (lVar5 == 0) {
          uStack_58 = 0;
          uStack_60 = 0x800000000000000;
          (**(code **)(*param_2 + 0x10))(param_2,&uStack_60);
        }
      }
      else {
        lVar9 = 0;
        do {
          puVar7 = (undefined8 *)(lVar5 + lVar9);
          lVar9 = lVar9 + 0xc;
          *puVar7 = 0;
          *(undefined2 *)(puVar7 + 1) = 0;
        } while ((param_3 & 0xffff) * 0xc != lVar9);
        param_2[0x11] = lVar5;
      }
      uVar2 = *(ushort *)(param_2 + 0xc) - 1;
      uVar4 = FUN_0021f454();
      lVar5 = FUN_00285d10((ulong)uVar2 << 4,uVar4);
      if ((uVar2 == 0) || (lVar5 == 0)) {
        param_2[0x13] = lVar5;
        if (lVar5 == 0) {
          uStack_58 = 0;
          uStack_60 = 0x800000000000000;
          (**(code **)(*param_2 + 0x10))(param_2,&uStack_60);
        }
      }
      else {
        if (uVar2 == 1) {
          uVar8 = 0;
        }
        else {
          uVar8 = 0;
          puVar7 = (undefined8 *)(lVar5 + 0x10);
          do {
            uVar8 = uVar8 + 2;
            puVar7[-2] = 0;
            *(undefined4 *)(puVar7 + -1) = 0;
            *puVar7 = 0;
            *(undefined4 *)(puVar7 + 1) = 0;
            puVar7 = puVar7 + 4;
          } while (((ulong)uVar2 & 0xfffffffe) != uVar8);
        }
        if ((uVar2 & 1) != 0) {
          puVar7 = (undefined8 *)(lVar5 + uVar8 * 0x10);
          *puVar7 = 0;
          *(undefined4 *)(puVar7 + 1) = 0;
        }
        param_2[0x13] = lVar5;
      }
      if (1 < *(ushort *)(param_2 + 0xc)) {
        lVar5 = 0;
        do {
          FUN_00219460(param_2[10] + lVar5 * 0x30,(short)param_2[0x12]);
          puVar7 = (undefined8 *)(param_2[0x13] + lVar5 * 0x10);
          lVar5 = lVar5 + 1;
          *puVar7 = 0;
          *(undefined4 *)(puVar7 + 1) = 0;
        } while ((int)((uint)lVar5 & 0xffff) < (int)(*(ushort *)(param_2 + 0xc) - 1));
      }
      *(undefined4 *)((long)param_2 + 100) = 0xfffffff;
      FUN_002198f0(param_2);
      uStack_60 = uStack_60 & 0xffffffff00000000;
      uStack_34 = 0;
      *(uint *)(PTR_DAT_04bccf00 + 0x1b0) = (uint)*(ushort *)(param_2 + 0x12);
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&uStack_60 + 4),(Result *)&uStack_34);
      goto LAB_0021cc84;
    }
    (**(code **)(*param_2 + 0x60))(param_2);
  }
  else {
    uStack_60 = uStack_60 & 0xffffffff00000000;
    uStack_50 = CONCAT44(uStack_50._4_4_,0x10c02);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&uStack_50 + 4),(Result *)&uStack_60);
  }
  puVar6 = &uStack_50;
LAB_0021cc84:
  FUN_002296c4(param_1,puVar6);
  return;
}

