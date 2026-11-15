
uint FUN_022c9cfc(long param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined *local_58;
  uint local_50;
  uint uStack_4c;
  undefined *local_48;
  uint local_40;
  uint local_3c;
  undefined4 uStack_38;
  undefined8 local_34;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined4 local_2a;
  
  bVar2 = *param_2;
  bVar3 = bVar2;
  if (7 < bVar2) {
    bVar3 = 0xff;
  }
  uVar1 = (long)(char)bVar3 & 0xffffffffU;
  if (7 < bVar2) {
    uVar1 = 0;
  }
  if ((&DAT_0547bb98)[uVar1] != '\0') {
    puVar7 = &DAT_0547b068 + ((long)(char)bVar3 & 0xffffffffU) * 0xc;
    if (7 < bVar2) {
      puVar7 = &DAT_0547b068;
    }
    if (*(char *)((long)puVar7 + 0x11) != '\0') {
      (&DAT_0547bb98)[uVar1] = (&DAT_0547bb98)[uVar1] + -1;
      bVar3 = *param_2;
      bVar4 = 7 < bVar3;
      if (bVar4) {
        bVar3 = 0xff;
      }
      puVar7 = &DAT_0547b068 + (ulong)(uint)(int)(char)bVar3 * 0xc;
      if (bVar4) {
        puVar7 = &DAT_0547b068;
      }
      FUN_01393458(puVar7);
      local_2a = 0x100ff;
      local_58 = PTR_DAT_04bb2010 + 0x10;
      uVar6 = (uint)*param_2;
      if (7 < uVar6) {
        uVar6 = 0xff;
      }
      local_2c = (undefined1)uVar6;
      local_50 = *(uint *)(param_1 + 8) & 0xfffffffe;
      uStack_4c = *(uint *)(param_1 + 0xc) & 0xfffffffe;
      uStack_38 = 0;
      local_34 = 0xb00000011;
      local_48 = local_58;
      local_40 = local_50;
      local_3c = uStack_4c;
      local_2b = local_2c;
      uVar5 = FUN_011e8d00(&local_58,0);
      if ((uVar5 & 1) != 0) {
        DAT_0547bac8 = DAT_0547bac8 & (1 << (ulong)(uVar6 & 0x1f) ^ 0xffffffffU);
      }
      return uVar5 & 1;
    }
  }
  return 0;
}

