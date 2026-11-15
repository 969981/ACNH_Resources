
void FUN_0205ba20(long param_1,ushort *param_2,uint param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  byte bVar5;
  ushort uVar6;
  ulong uVar7;
  uint uVar8;
  byte bVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  float fVar13;
  float fVar14;
  undefined2 local_3c;
  undefined1 local_3a;
  uint local_38;
  undefined4 local_34;
  
  local_3c = 0x23;
  local_3a = 8;
  uVar6 = *param_2;
  if (0x22 < (byte)(uVar6 >> 8)) {
    return;
  }
  FUN_020fd218(&local_3c,uVar6 >> 8,uVar6 & 0xff);
  uVar7 = (ulong)(byte)local_3c;
  if (0x22 < uVar7) {
    return;
  }
  if ((byte)PTR_DAT_04bc27f0[uVar7] < local_3c._1_1_) {
    return;
  }
  if (((uint)(&DAT_053e6eb8)[uVar7] >> (ulong)(local_3c._1_1_ & 0x1f) & 1) == 0) {
    return;
  }
  uVar4 = *(undefined4 *)(param_2 + 2);
  puVar1 = (undefined4 *)(param_1 + 0x90) + (ulong)param_3 * 0xe;
  if (9 < param_3) {
    puVar1 = (undefined4 *)(param_1 + 0x90);
  }
  uVar6 = *param_2;
  if ((byte)(uVar6 >> 8) < 0x23) {
    FUN_020fd218(puVar1 + 1,uVar6 >> 8,uVar6 & 0xff);
  }
  uVar6 = param_2[1];
  puVar1[2] = uVar4;
  local_38 = param_3 + 0x62;
  *(char *)((long)puVar1 + 7) = (char)uVar6;
  *(ushort *)(puVar1 + 3) = param_2[4];
  *(char *)((long)puVar1 + 0xe) = (char)param_2[5];
  *(undefined1 *)((long)puVar1 + 0xf) = *(undefined1 *)((long)param_2 + 0xb);
  puVar1[4] = *(undefined4 *)(param_2 + 6);
  *puVar1 = 3;
  fVar13 = *(float *)(param_2 + 8);
  fVar14 = *(float *)(param_2 + 10);
  puVar2 = DAT_053e5c10 + (ulong)local_38 * 0x15;
  if (0x6c < local_38) {
    puVar2 = DAT_053e5c10;
  }
  *puVar2 = (char)(int)fVar13;
  puVar2[2] = (char)((uint)(int)fVar14 >> 4);
  bVar5 = puVar2[7];
  puVar2[1] = (byte)((int)fVar14 << 4) | (byte)((uint)(int)fVar13 >> 8) & 0xf;
  puVar2[7] = bVar5 & 0xf3;
  puVar2[3] = *(undefined1 *)((long)param_2 + 0x1b);
  if (DAT_055c1b60 != &DAT_055c1b58) {
    puVar10 = DAT_055c1b60 + -8;
    uVar8 = 0;
    puVar11 = DAT_055c1b60;
    puVar12 = puVar10;
    do {
      if (*(int *)(puVar12 + 7) == -0x24a26848) {
        if (((uVar8 ^ 0xffffffff) & 0xffff) != 0) {
          local_34 = 3;
          puVar3 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar8 & 0xffffffffU) * 8);
          if ((uVar8 & 0xff00) != 0) {
            puVar3 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar3 >> 3 & 1) == 0) goto LAB_0205bc8c;
          uVar8 = 0;
          puVar11 = DAT_055c1b60;
          goto LAB_0205bc30;
        }
        break;
      }
      puVar11 = (undefined8 *)puVar11[1];
      uVar8 = uVar8 + 1;
      puVar12 = puVar11 + -8;
    } while (puVar11 != &DAT_055c1b58);
  }
  goto LAB_0205bc50;
LAB_0205bc8c:
  bVar9 = (byte)(uVar8 >> 8);
  goto LAB_0205bc58;
  while( true ) {
    puVar11 = (undefined8 *)puVar11[1];
    uVar8 = uVar8 + 1;
    puVar10 = puVar11 + -8;
    if (puVar11 == &DAT_055c1b58) break;
LAB_0205bc30:
    if (*(int *)(puVar10 + 7) == 0x6622bd46) goto LAB_0205bc8c;
  }
LAB_0205bc50:
  uVar8 = 0xff;
  bVar9 = 0xff;
LAB_0205bc58:
  puVar2[4] = (char)uVar8;
  puVar2[7] = bVar5 & 0xf3;
  puVar2[5] = puVar2[5] & 0xfc | bVar9 & 3;
  FUN_020ea498(DAT_053e5c10,local_38,1,0);
  return;
}

