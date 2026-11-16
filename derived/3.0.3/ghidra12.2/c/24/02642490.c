
void FUN_02642490(undefined1 *param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  *(undefined2 *)(param_1 + 10) = DAT_04cb6038;
  uVar8 = nn::os::GetSystemTick();
  uVar4 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
  uVar8 = uVar4 ^ uVar4 * 0x800;
  uVar5 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
  uVar4 = uVar5 ^ uVar5 * 0x800;
  uVar6 = (uVar5 ^ uVar5 >> 0x1e) * 0x6c078965 + 3;
  uVar5 = uVar6 ^ uVar6 * 0x800;
  uVar7 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 4;
  uVar6 = uVar8 ^ uVar7;
  uVar3 = uVar7 ^ uVar7 * 0x800;
  uVar8 = uVar8 >> 8 ^ uVar7 >> 0x13 ^ uVar6;
  param_1[8] = (char)*(undefined4 *)(&DAT_04102860 + (ulong)(uVar6 >> 0x1e) * 4);
  uVar6 = uVar4 ^ uVar8;
  uVar7 = uVar8 ^ uVar8 << 0xb;
  uVar8 = uVar4 >> 8 ^ uVar8 >> 0x13 ^ uVar6;
  param_1[1] = (char)*(undefined4 *)(&DAT_04102870 + (ulong)(uVar6 >> 0x1e) * 4);
  uVar4 = uVar8 ^ uVar8 << 0xb;
  uVar8 = uVar5 >> 8 ^ uVar8 >> 0x13 ^ uVar5 ^ uVar8;
  param_1[4] = (char)((ulong)uVar8 * 3 >> 0x20);
  uVar5 = uVar3 ^ uVar8;
  uVar6 = uVar8 ^ uVar8 << 0xb;
  uVar8 = uVar3 >> 8 ^ uVar8 >> 0x13 ^ uVar5;
  param_1[5] = (char)(&DAT_04101648)[uVar5 >> 0x1f];
  param_1[6] = 2;
  uVar5 = uVar7 ^ uVar8;
  uVar3 = uVar8 ^ uVar8 << 0xb;
  uVar8 = uVar7 >> 8 ^ uVar8 >> 0x13 ^ uVar5;
  uVar7 = uVar4 ^ uVar8;
  param_1[7] = (byte)(uVar5 >> 0x1f);
  uVar8 = uVar4 >> 8 ^ uVar8 >> 0x13 ^ uVar7;
  puVar1 = &DAT_0417af9c;
  if (param_2 == 0) {
    puVar1 = &DAT_0417af40;
  }
  puVar2 = (undefined4 *)(&DAT_0417af88 + ((ulong)uVar8 * 5 >> 0x1e & 0x1c));
  if (param_2 == 0) {
    puVar2 = (undefined4 *)(&DAT_041023f0 + (ulong)(uVar7 >> 0x1e) * 4);
  }
  uVar8 = uVar6 >> 8 ^ uVar8 >> 0x13 ^ uVar6 ^ uVar8;
  *param_1 = (char)*puVar2;
  param_1[2] = (char)*(undefined4 *)(puVar1 + ((ulong)uVar8 * 0x12 >> 0x1e & 0x7c));
  uVar4 = uVar3 ^ uVar8;
  puVar2 = (undefined4 *)
           (&DAT_0417afe4 + ((ulong)(uVar3 >> 8 ^ uVar8 >> 0x13 ^ uVar4) * 6 >> 0x1e & 0x1c));
  if (param_3 == 0) {
    puVar2 = &DAT_04101648 + (uVar4 >> 0x1f);
  }
  param_1[3] = (char)*puVar2;
  return;
}

