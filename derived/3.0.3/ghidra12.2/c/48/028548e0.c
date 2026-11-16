
void FUN_028548e0(long param_1,uint *param_2,undefined8 param_3,byte *param_4)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  undefined8 local_80;
  undefined8 local_78;
  uint local_6c [2];
  uint local_64;
  
  if ((*param_4 >> 6 & 1) != 0) {
    if (DAT_055a345c == '\0') {
      puVar8 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar4 = *puVar8 ^ *puVar8 << 0xb;
      uVar11 = puVar8[3];
      *puVar8 = puVar8[1];
      puVar8[1] = puVar8[2];
      uVar4 = uVar4 >> 8 ^ uVar11 >> 0x13 ^ uVar4 ^ uVar11;
      puVar8[2] = uVar11;
      puVar8[3] = uVar4;
    }
    else {
      uVar4 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar4 = uVar4 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar4 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar4;
    }
    if ((uint)((ulong)uVar4 * 100 >> 0x20) < (uint)*(byte *)(param_1 + 0x1a6)) {
      local_64 = 0;
      if (&local_64 != param_2) {
        local_64 = *param_2;
      }
      FUN_021eb8f0(&local_64);
      FUN_021ec000(&local_64);
      local_80 = (undefined *)CONCAT53(local_80._3_5_,0x80023);
      uVar2 = *(ushort *)(param_1 + 0x1a4);
      if ((byte)(uVar2 >> 8) < 0x23) {
        FUN_020fd218(&local_80,uVar2 >> 8,uVar2 & 0xff);
      }
      uVar4 = 0;
      uVar11 = 0;
      uVar10 = 0xffffffff;
      uVar3 = (ushort)local_80 >> 8;
      uVar2 = (ushort)local_80 << 8;
      do {
        if ((local_64 >> (ulong)(uVar11 & 0x1f) & 1) != 0) {
          lVar5 = FUN_0265c2a0(uVar11);
          if (lVar5 == 0) {
            puVar12 = (ushort *)&DAT_053e6f44;
          }
          else if ((*(long **)(lVar5 + 0x28) == (long *)0x0) ||
                  (puVar6 = (undefined8 *)**(long **)(lVar5 + 0x28), puVar6 == (undefined8 *)0x0)) {
            puVar12 = (ushort *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8));
          }
          else {
            uVar7 = (**(code **)*puVar6)();
            puVar12 = (ushort *)(*(long *)(lVar5 + 0x10) + *(long *)(lVar5 + 8));
            if ((((uVar7 & 1) != 0) && (*(long *)(lVar5 + 0x28) != 0)) &&
               (puVar6 = *(undefined8 **)(*(long *)(lVar5 + 0x28) + 8), puVar6 != (undefined8 *)0x0)
               ) {
              (**(code **)*puVar6)();
            }
          }
          if ((ushort)(uVar3 | uVar2) != (ushort)(*puVar12 >> 8 | *puVar12 << 8)) {
            if (DAT_055a345c == '\0') {
              puVar8 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
              uVar9 = *puVar8 ^ *puVar8 << 0xb;
              uVar1 = puVar8[3];
              *puVar8 = puVar8[1];
              puVar8[1] = puVar8[2];
              uVar9 = uVar9 >> 8 ^ uVar1 >> 0x13 ^ uVar9 ^ uVar1;
              puVar8[2] = uVar1;
              puVar8[3] = uVar9;
            }
            else {
              uVar9 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
              DAT_05582b70 = DAT_05582b74;
              DAT_05582b74 = DAT_05582b78;
              uVar9 = uVar9 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar9 ^ DAT_05582b7c;
              DAT_05582b78 = DAT_05582b7c;
              DAT_05582b7c = uVar9;
            }
            uVar4 = uVar4 + 1;
            if (((ulong)uVar9 * (ulong)uVar4 & 0xffffffff00000000) == 0) {
              uVar10 = uVar11;
            }
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != 10);
      if (uVar10 != 0xffffffff) {
        local_6c[0] = uVar10;
        FUN_0284c3b0(param_1 + 0x16c,0);
        *(char *)(param_1 + 0x198) = (char)uVar10;
        local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
        *(undefined1 *)(param_1 + 0x19b) = 1;
        FUN_021dafb0(local_6c,&local_80,0,0,0,1);
        FUN_02849504(param_1 + 0x16c);
        FUN_021aaee0(&DAT_053fe348,local_6c[0]);
        if (uVar10 < 10) {
          *param_2 = *param_2 & (1 << (ulong)(uVar10 & 0x1f) ^ 0xffffffffU);
        }
      }
    }
  }
  if ((*param_4 >> 1 & 1) != 0) {
    if (DAT_055a345c == '\0') {
      puVar8 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
      uVar4 = *puVar8 ^ *puVar8 << 0xb;
      uVar11 = puVar8[3];
      *puVar8 = puVar8[1];
      puVar8[1] = puVar8[2];
      uVar4 = uVar4 >> 8 ^ uVar11 >> 0x13 ^ uVar4 ^ uVar11;
      puVar8[2] = uVar11;
      puVar8[3] = uVar4;
    }
    else {
      uVar4 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar4 = uVar4 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar4 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar4;
    }
    if (((uint)((ulong)uVar4 * 100 >> 0x20) < (uint)*(byte *)(param_1 + 0x7a)) &&
       (uVar4 = FUN_02855af0(param_2), uVar4 != 0xffffffff)) {
      puVar6 = (undefined8 *)(param_1 + 0x44);
      *puVar6 = 0;
      DAT_055a345c = '\x01';
      *(undefined8 *)(param_1 + 0x5c) = 0;
      *(undefined8 *)(param_1 + 100) = 0;
      *(undefined2 *)(param_1 + 0x62) = 0x101;
      *(undefined8 *)(param_1 + 0x4c) = 0;
      *(undefined8 *)(param_1 + 0x54) = 0;
      *(undefined8 *)(param_1 + 0x6c) = 0;
      *(undefined8 *)(param_1 + 0x74) = 0;
      *(undefined1 **)(param_1 + 0x68) = &LAB_01010000;
      *(undefined1 *)(param_1 + 0x73) = 0;
      local_80 = (undefined *)CONCAT44((int)((ulong)local_80 >> 0x20),2);
      *(undefined1 *)(param_1 + 0x71) = 1;
      *(char *)(param_1 + 0x70) = (char)uVar4;
      *(undefined2 *)(param_1 + 0x78) = 0;
      *(undefined1 *)(param_1 + 0x7a) = 0;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      *(undefined1 *)(param_1 + 0x74) = 2;
      uVar11 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
      DAT_05582b70 = DAT_05582b74;
      DAT_05582b74 = DAT_05582b78;
      uVar10 = uVar11 ^ DAT_05582b7c;
      DAT_05582b78 = DAT_05582b7c;
      DAT_05582b7c = uVar11 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar10;
      *(byte *)(param_1 + 0x72) = (byte)(uVar10 >> 0x1e);
      FUN_02847f9c(local_6c,puVar6);
      local_80 = PTR_DAT_04bb2010 + 0x10;
      local_78 = 0;
      uVar7 = FUN_01687c60(param_3,local_6c,0,&local_80,1);
      if ((uVar7 & 1) == 0) {
        *(undefined4 *)(param_1 + 100) = 0;
        *(undefined1 *)(param_1 + 0x65) = 0;
        *(undefined1 **)(param_1 + 0x68) = &LAB_01010000;
        *(undefined1 *)(param_1 + 0x72) = 0;
        *(undefined1 *)(param_1 + 0x70) = 0xff;
        *(undefined8 *)(param_1 + 0x54) = 0;
        *(undefined8 *)(param_1 + 0x5c) = 0;
        *(undefined2 *)(param_1 + 0x62) = 0x101;
        *puVar6 = 0;
        *(undefined8 *)(param_1 + 0x4c) = 0;
        *(undefined1 *)(param_1 + 0x73) = 0;
      }
      else {
        local_64 = 2;
        *(short *)(param_1 + 0x7c) = (short)local_78;
        *(short *)(param_1 + 0x7e) = (short)((ulong)local_78 >> 0x20);
        *(undefined1 *)(param_1 + 0x73) = 2;
        *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(DAT_04da6480 + 0x4060);
        FUN_02847d38(puVar6,0);
        DAT_055a345c = '\0';
      }
      *param_2 = *param_2 & (1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU);
    }
  }
  return;
}

