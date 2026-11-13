
undefined8 FUN_011de210(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ushort uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  uint uVar9;
  int *piVar10;
  undefined8 local_38;
  
  if (999 < (int)param_2) {
    return 0;
  }
  puVar2 = (undefined4 *)(param_1 + 0x278);
  if (param_2 < 1000) {
    puVar2 = (undefined4 *)(param_1 + 0x278) + (ulong)param_2 * 0x1e;
  }
  uVar5 = *(ushort *)(puVar2 + 0x1a);
  uVar9 = (uint)uVar5;
  if ((uVar5 >> 3 & 1) == 0) {
LAB_011de254:
    *(undefined2 *)(puVar2 + 0x1a) = 0;
    local_38 = 0xfffe;
    FUN_0277d4ac(&local_38);
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined8 *)(puVar2 + 6) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 8) = 0;
    uVar7 = 1;
    *(undefined8 *)(puVar2 + 10) = 0;
    puVar2[0xc] = 0;
    *(undefined4 *)((long)puVar2 + 0x6a) = 0;
    *(undefined8 *)(puVar2 + 0xe) = 0;
    puVar2[0x10] = 0;
    *puVar2 = (undefined4)local_38;
    puVar2[1] = local_38._4_4_;
    *(undefined8 *)(puVar2 + 0x12) = 0;
    *(undefined1 *)((long)puVar2 + 0x6e) = 0xff;
    puVar2[0x14] = 0;
    *(undefined8 *)(puVar2 + 0x16) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 0x18) = 0x1e00000003;
    *(undefined2 *)((long)puVar2 + 0x6f) = 0xffff;
  }
  else {
    if ((((uVar5 >> 0xd & 1) != 0) && ((DAT_050dfb34 >> 5 & 1) != 0)) && ((int)DAT_05146e1c < 100))
    {
      if ((int)DAT_05146e1c < 1) {
        iVar6 = puVar2[6];
      }
      else {
        iVar6 = puVar2[6];
        piVar10 = &DAT_050df3fc;
        uVar8 = (ulong)DAT_05146e1c;
        do {
          if (iVar6 == piVar10[-1] && puVar2[7] == *piVar10) goto LAB_011de350;
          piVar10 = piVar10 + 4;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      puVar3 = &DAT_050df3f0 + (ulong)DAT_05146e1c * 2;
      if (99 < DAT_05146e1c) {
        puVar3 = &DAT_050df3f0;
      }
      *(int *)(puVar3 + 1) = iVar6;
      *(undefined4 *)((long)puVar3 + 0xc) = puVar2[7];
      DAT_05146e1c = DAT_05146e1c + 1;
      uVar9 = (uint)*(ushort *)(puVar2 + 0x1a);
    }
LAB_011de350:
    if ((uVar9 >> 4 & 1) == 0) {
      if ((uVar9 >> 5 & 1) == 0) {
        iVar6 = FUN_0277d6c4(puVar2);
        if ((((iVar6 == 0xea79) && (uVar9 = puVar2[6], DAT_05233970 <= (int)uVar9)) &&
            (((int)uVar9 <= DAT_05233980 &&
             ((uVar4 = puVar2[7], DAT_05233974 <= (int)uVar4 && ((int)uVar4 <= DAT_05233984)))))) &&
           (uVar4 = (uVar4 & 0x1fffffe) * 0x80 + ((int)uVar9 >> 1), uVar4 >> 0xf == 0)) {
          lVar1 = (ulong)(uVar4 >> 5) * 4;
          *(uint *)(&DAT_0514e4e8 + lVar1) =
               *(uint *)(&DAT_0514e4e8 + lVar1) & (1 << (ulong)(uVar9 >> 1 & 0x1f) ^ 0xffffffffU);
        }
        if (puVar2[0x18] == 0) {
          FUN_011e7a94(param_1,puVar2);
        }
        else {
          uVar8 = FUN_011e78c8(param_1,puVar2,param_3 & 1);
          if ((uVar8 & 1) == 0) goto LAB_011de430;
        }
        iVar6 = FUN_0277d6c4(puVar2);
        if (((((iVar6 == 0xea79) && (uVar9 = puVar2[6], DAT_05233970 <= (int)uVar9)) &&
             ((int)uVar9 <= DAT_05233980)) &&
            ((uVar4 = puVar2[7], DAT_05233974 <= (int)uVar4 && ((int)uVar4 <= DAT_05233984)))) &&
           (uVar4 = (uVar4 & 0x1fffffe) * 0x80 + ((int)uVar9 >> 1), uVar4 >> 0xf == 0)) {
          lVar1 = (ulong)(uVar4 >> 5) * 4;
          *(uint *)(&DAT_0514e4e8 + lVar1) =
               *(uint *)(&DAT_0514e4e8 + lVar1) & (1 << (ulong)(uVar9 >> 1 & 0x1f) ^ 0xffffffffU);
        }
        goto LAB_011de254;
      }
      FUN_011e7a94(param_1,puVar2);
    }
    else {
      FUN_011e78c8(param_1,puVar2,0);
    }
LAB_011de430:
    uVar7 = 0;
  }
  return uVar7;
}

