
void FUN_002437f4(undefined8 param_1,long param_2,undefined1 *param_3,undefined4 *param_4)

{
  long lVar1;
  ulong uVar2;
  undefined1 uVar3;
  int iVar4;
  ushort *puVar5;
  undefined1 *puVar6;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  lVar1 = param_2 + 0x18;
  *param_3 = (char)*(undefined4 *)(param_2 + 8);
  uVar3 = FUN_00227d94(lVar1);
  param_3[1] = uVar3;
  iVar4 = FUN_00227d94(lVar1);
  if (iVar4 == 2) {
    puVar5 = (ushort *)FUN_00227acc(lVar1);
    *(ushort *)(param_3 + 2) = *puVar5 >> 8 | *puVar5 << 8;
    *(ushort *)(param_3 + 4) = puVar5[1] >> 8 | puVar5[1] << 8;
    *(ushort *)(param_3 + 6) = puVar5[2] >> 8 | puVar5[2] << 8;
    *(ushort *)(param_3 + 8) = puVar5[3] >> 8 | puVar5[3] << 8;
    *(ushort *)(param_3 + 10) = puVar5[4] >> 8 | puVar5[4] << 8;
    *(ushort *)(param_3 + 0xc) = puVar5[5] >> 8 | puVar5[5] << 8;
    *(ushort *)(param_3 + 0xe) = puVar5[6] >> 8 | puVar5[6] << 8;
    *(ushort *)(param_3 + 0x10) = puVar5[7] >> 8 | puVar5[7] << 8;
    *(ushort *)(param_3 + 0x12) = puVar5[8] >> 8 | puVar5[8] << 8;
    *(ushort *)(param_3 + 0x14) = puVar5[9] >> 8 | puVar5[9] << 8;
    *(ushort *)(param_3 + 0x16) = puVar5[10] >> 8 | puVar5[10] << 8;
    *(ushort *)(param_3 + 0x18) = puVar5[0xb] >> 8 | puVar5[0xb] << 8;
    *(ushort *)(param_3 + 0x1a) = puVar5[0xc] >> 8 | puVar5[0xc] << 8;
    *(ushort *)(param_3 + 0x1c) = puVar5[0xd] >> 8 | puVar5[0xd] << 8;
    *(ushort *)(param_3 + 0x1e) = puVar5[0xe] >> 8 | puVar5[0xe] << 8;
    *(ushort *)(param_3 + 0x20) = puVar5[0xf] >> 8 | puVar5[0xf] << 8;
    *(ushort *)(param_3 + 0x22) = puVar5[0x10] >> 8 | puVar5[0x10] << 8;
    *(ushort *)(param_3 + 0x24) = puVar5[0x11] >> 8 | puVar5[0x11] << 8;
    *(ushort *)(param_3 + 0x26) = puVar5[0x12] >> 8 | puVar5[0x12] << 8;
    *(ushort *)(param_3 + 0x28) = puVar5[0x13] >> 8 | puVar5[0x13] << 8;
  }
  else {
    puVar6 = (undefined1 *)FUN_00227adc(lVar1);
    param_3[2] = *puVar6;
    param_3[3] = puVar6[1];
    param_3[4] = puVar6[2];
    param_3[5] = puVar6[3];
    param_3[6] = puVar6[4];
    param_3[7] = puVar6[5];
    param_3[8] = puVar6[6];
    param_3[9] = puVar6[7];
    param_3[10] = puVar6[8];
    param_3[0xb] = puVar6[9];
    param_3[0xc] = puVar6[10];
    param_3[0xd] = puVar6[0xb];
    param_3[0xe] = puVar6[0xc];
    param_3[0xf] = puVar6[0xd];
    param_3[0x10] = puVar6[0xe];
    param_3[0x11] = puVar6[0xf];
    param_3[0x12] = puVar6[0x10];
    param_3[0x13] = puVar6[0x11];
    param_3[0x14] = puVar6[0x12];
    param_3[0x15] = puVar6[0x13];
    param_3[0x16] = puVar6[0x14];
    param_3[0x17] = puVar6[0x15];
    param_3[0x18] = puVar6[0x16];
    param_3[0x19] = puVar6[0x17];
    param_3[0x1a] = puVar6[0x18];
    param_3[0x1b] = puVar6[0x19];
    param_3[0x1c] = puVar6[0x1a];
    param_3[0x1d] = puVar6[0x1b];
    param_3[0x1e] = puVar6[0x1c];
    param_3[0x1f] = puVar6[0x1d];
    param_3[0x20] = puVar6[0x1e];
    param_3[0x21] = puVar6[0x1f];
    param_3[0x22] = puVar6[0x20];
    param_3[0x23] = puVar6[0x21];
    param_3[0x24] = puVar6[0x22];
    param_3[0x25] = puVar6[0x23];
    param_3[0x26] = puVar6[0x24];
    param_3[0x27] = puVar6[0x25];
    param_3[0x28] = puVar6[0x26];
    param_3[0x29] = puVar6[0x27];
  }
  local_44 = 0;
  local_34 = 0;
  uVar2 = (*(ulong *)(param_2 + 0x60) & 0xff00ff00ff00ff00) >> 8 |
          (*(ulong *)(param_2 + 0x60) & 0xff00ff00ff00ff) << 8;
  uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
  *(ulong *)(param_3 + 0x2a) = uVar2 >> 0x20 | uVar2 << 0x20;
  *param_4 = 0x32;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_34);
  FUN_002296c4(param_1,&local_44);
  return;
}

