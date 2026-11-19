
/* WARNING: Type propagation algorithm not settling */

void FUN_03bd8a3c(long *param_1,undefined4 *param_2,uint param_3)

{
  long *plVar1;
  float fVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined4 uVar11;
  undefined1 local_b0 [8];
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  ulong local_90;
  ulong uStack_88;
  undefined8 local_80;
  ulong uStack_78;
  undefined8 local_70;
  ulong uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulong uStack_48;
  
  if (param_3 != 0) {
    lVar8 = FUN_00322a20(param_1 + 0x15);
    uVar9 = (**(code **)(*param_1 + 0x18))(param_1);
    if ((lVar8 != 0) && ((uVar9 & 1) != 0)) {
      if ((param_3 & 1) != 0) {
        *(undefined4 *)(param_1 + 0x1b) = *param_2;
        *(undefined4 *)((long)param_1 + 0xdc) = param_2[1];
        uVar11 = param_2[2];
        *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) | 2;
        *(undefined4 *)(param_1 + 0x1c) = uVar11;
      }
      if ((param_3 >> 1 & 1) != 0) {
        *(undefined4 *)((long)param_1 + 0xe4) = param_2[3];
        *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) | 4;
      }
      plVar1 = (long *)(*(long *)(*(long *)(param_1[4] + 0x30) + 0x18) + 0x28);
      iVar6 = FUN_03bd433c(plVar1,param_1[5]);
      if (((iVar6 != 0) ||
          (uVar7 = (**(code **)(*plVar1 + 0x58))(plVar1,param_1[5]), (uVar7 >> 1 & 1) != 0)) ||
         ((*(byte *)(param_1 + 0x13) >> 4 & 1) == 0)) {
        if ((param_3 >> 3 & 1) != 0) {
          if (param_1[5] != 0) {
            FUN_03bda49c(param_1,local_b0,param_2 + 10,param_2 + 7);
            uVar9 = (**(code **)(*param_1 + 0x18))(param_1);
            if ((((uVar9 & 1) != 0) &&
                (lVar10 = FUN_00322a20(param_1 + 0x15), 0 < *(int *)(lVar10 + 0x18c))) &&
               (*(char *)(lVar10 + 0x1c) != '\0')) {
              uStack_68 = local_90 >> 0x20;
              uStack_58 = (undefined4)uStack_88;
              uStack_48 = uStack_88 >> 0x20;
              local_80 = CONCAT44((int)uStack_a0,local_b0._0_4_);
              uStack_78 = local_90 & 0xffffffff;
              local_60 = uStack_a8;
              uStack_5c = uStack_98;
              uStack_54 = 0;
              local_70 = CONCAT44((int)((ulong)uStack_a0 >> 0x20),local_b0._4_4_);
              FUN_00322694(lVar10,&local_80);
            }
          }
          bVar3 = *(byte *)(param_1 + 0x13);
          *(byte *)(param_1 + 0x13) = bVar3 & 0xfe;
          lVar10 = *(long *)(param_2 + 10);
          param_1[0x1e] = *(long *)(param_2 + 0xc);
          param_1[0x1d] = lVar10;
          lVar10 = *(long *)(param_2 + 0xe);
          param_1[0x20] = *(long *)(param_2 + 0x10);
          param_1[0x1f] = lVar10;
          lVar5 = *(long *)(param_2 + 0x14);
          lVar10 = *(long *)(param_2 + 0x12);
          *(byte *)(param_1 + 0x13) = bVar3 & 0xfe | 0x10;
          param_1[0x22] = lVar5;
          param_1[0x21] = lVar10;
        }
        if ((param_3 >> 2 & 1) != 0) {
          FUN_03bd9238(param_1,param_2 + 4,param_2 + 7);
          *(undefined4 *)(param_1 + 0x1e) = 0;
          *(undefined4 *)(param_1 + 0x20) = 0;
          param_1[0x21] = 0;
          param_1[0x1d] = 0x3f800000;
          param_1[0x1f] = 0x3f80000000000000;
          *(undefined4 *)(param_1 + 0x22) = 0x3f800000;
          *(undefined4 *)((long)param_1 + 0xf4) = param_2[4];
          *(undefined4 *)((long)param_1 + 0x104) = param_2[5];
          uVar11 = param_2[6];
          *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) | 0x10;
          *(undefined4 *)((long)param_1 + 0x114) = uVar11;
        }
      }
      if ((param_3 >> 4 & 1) != 0) {
        *(undefined1 *)(lVar8 + 0x19) = 0;
      }
      if ((param_3 >> 5 & 1) != 0) {
        *(undefined8 *)(lVar8 + 0x1d0) = *(undefined8 *)(param_2 + 0x16);
      }
      if ((param_3 >> 7 & 1) != 0) {
        FUN_0032266c(param_2[0x19],lVar8);
      }
      if ((param_3 >> 10 & 1) != 0) {
        uVar11 = param_2[0x1e];
        *(undefined4 *)(lVar8 + 0x134) = param_2[0x1f];
        *(undefined4 *)(lVar8 + 0x130) = uVar11;
        *(ulong *)(lVar8 + 0x158) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar8 + 0x138) >> 0x20) *
                      (float)((ulong)*(undefined8 *)(lVar8 + 0x108) >> 0x20),
                      (float)*(undefined8 *)(lVar8 + 0x138) * (float)*(undefined8 *)(lVar8 + 0x108))
        ;
        *(ulong *)(lVar8 + 0x150) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar8 + 0x130) >> 0x20) *
                      (float)((ulong)*(undefined8 *)(lVar8 + 0x100) >> 0x20),
                      (float)*(undefined8 *)(lVar8 + 0x130) * (float)*(undefined8 *)(lVar8 + 0x100))
        ;
      }
      if ((param_3 >> 0xb & 1) != 0) {
        fVar2 = (float)param_2[0x20];
        uVar4 = *(undefined8 *)(param_2 + 0x1e);
        *(ulong *)(lVar8 + 0x138) = (ulong)(uint)fVar2;
        *(undefined8 *)(lVar8 + 0x130) = uVar4;
        *(ulong *)(lVar8 + 0x158) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar8 + 0x108) >> 0x20) * 0.0,
                      (float)*(undefined8 *)(lVar8 + 0x108) * fVar2);
        *(ulong *)(lVar8 + 0x150) =
             CONCAT44((float)((ulong)*(undefined8 *)(lVar8 + 0x100) >> 0x20) *
                      (float)((ulong)uVar4 >> 0x20),
                      (float)*(undefined8 *)(lVar8 + 0x100) * (float)uVar4);
      }
      if ((param_3 >> 0xc & 1) != 0) {
        *(undefined4 *)(lVar8 + 0x1f8) = param_2[0x21];
      }
      if ((param_3 >> 0xd & 1) != 0) {
        *(undefined4 *)(lVar8 + 0x1fc) = param_2[0x22];
      }
      if ((param_3 >> 0xe & 1) != 0) {
        uVar4 = *(undefined8 *)(param_2 + 0x23);
        *(ulong *)(lVar8 + 0x208) = (ulong)(uint)param_2[0x25];
        *(undefined8 *)(lVar8 + 0x200) = uVar4;
      }
      if ((param_3 >> 0xf & 1) != 0) {
        *(undefined4 *)(lVar8 + 0x220) = param_2[0x26];
      }
      if ((param_3 >> 0x10 & 1) != 0) {
        uVar7 = param_2[0x29];
        uVar4 = *(undefined8 *)(param_2 + 0x27);
        *(undefined1 *)(lVar8 + 0x1d) = 1;
        *(ulong *)(lVar8 + 0x238) = (ulong)uVar7;
        *(undefined8 *)(lVar8 + 0x230) = uVar4;
      }
      if ((param_3 >> 0x11 & 1) != 0) {
        uVar4 = *(undefined8 *)(param_2 + 0x2a);
        *(ulong *)(lVar8 + 0x128) = (ulong)(uint)param_2[0x2c];
        *(undefined8 *)(lVar8 + 0x120) = uVar4;
      }
      if ((param_3 >> 0x12 & 1) != 0) {
        uStack_78 = *(ulong *)(param_2 + 0x2f);
        local_80 = *(undefined8 *)(param_2 + 0x2d);
        FUN_003229a0(lVar8,&local_80);
      }
      if ((param_3 >> 0x13 & 1) != 0) {
        uStack_78 = *(ulong *)(param_2 + 0x33);
        local_80 = *(undefined8 *)(param_2 + 0x31);
        FUN_003229d0(lVar8,&local_80);
      }
      plVar1 = DAT_05aec200;
      if ((param_3 >> 0x14 & 1) != 0) {
        uVar4 = *(undefined8 *)(param_2 + 0x35);
        *(ulong *)(lVar8 + 0xf8) = (ulong)(uint)param_2[0x37];
        *(undefined8 *)(lVar8 + 0xf0) = uVar4;
        plVar1 = DAT_05aec200;
      }
      DAT_05aec200 = plVar1;
      if ((param_3 >> 0x15 & 1) != 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
        FUN_00321770((float)(int)param_2[0x38],lVar8);
        *(byte *)(param_1 + 0x13) = *(byte *)(param_1 + 0x13) & 0xf7;
        (**(code **)(*plVar1 + 0x18))(plVar1);
      }
      if ((param_3 >> 0x16 & 1) != 0) {
        *(undefined1 *)(lVar8 + 0x275) = *(undefined1 *)(param_2 + 0x39);
      }
      if ((param_3 >> 0x17 & 1) != 0) {
        *(undefined1 *)(lVar8 + 0x20) = *(undefined1 *)(param_2 + 0x41);
      }
    }
  }
  return;
}

