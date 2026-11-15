
/* WARNING: Removing unreachable block (ram,0x024e8528) */
/* WARNING: Removing unreachable block (ram,0x024e846c) */
/* WARNING: Removing unreachable block (ram,0x024e8370) */
/* WARNING: Removing unreachable block (ram,0x024e82dc) */
/* WARNING: Removing unreachable block (ram,0x024e81cc) */
/* WARNING: Removing unreachable block (ram,0x024e813c) */
/* WARNING: Removing unreachable block (ram,0x024e8110) */
/* WARNING: Removing unreachable block (ram,0x024e81f8) */
/* WARNING: Removing unreachable block (ram,0x024e82b0) */
/* WARNING: Removing unreachable block (ram,0x024e8344) */
/* WARNING: Removing unreachable block (ram,0x024e83d8) */
/* WARNING: Removing unreachable block (ram,0x024e8404) */
/* WARNING: Removing unreachable block (ram,0x024e8498) */
/* WARNING: Removing unreachable block (ram,0x024e8500) */
/* WARNING: Removing unreachable block (ram,0x024e854c) */
/* WARNING: Removing unreachable block (ram,0x024e8158) */
/* WARNING: Removing unreachable block (ram,0x024e8214) */
/* WARNING: Removing unreachable block (ram,0x024e8168) */
/* WARNING: Removing unreachable block (ram,0x024e85c8) */
/* WARNING: Removing unreachable block (ram,0x024e8598) */
/* WARNING: Removing unreachable block (ram,0x024e85a0) */
/* WARNING: Removing unreachable block (ram,0x024e8220) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_024e8030(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint local_44 [13];
  
  uVar6 = nn::os::GetSystemTick();
  uVar2 = (uVar6 ^ uVar6 >> 0x1e) * 0x6c078965 + 1;
  uVar6 = 0;
  uVar3 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
  uVar4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 3;
  uVar5 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 4;
  do {
    local_44[(int)uVar6] = uVar6;
    uVar6 = uVar6 + 1;
  } while (uVar6 < 8);
  uVar2 = uVar2 ^ uVar2 * 0x800;
  uVar6 = uVar2 ^ uVar5;
  uVar2 = uVar2 >> 8 ^ uVar5 >> 0x13 ^ uVar6;
  uVar7 = (ulong)(uVar6 >> 0x1d);
  if (7 < (uint)((ulong)uVar2 * 8 >> 0x20)) {
    uVar7 = 0;
  }
  uVar1 = local_44[uVar7];
  local_44[uVar7] = local_44[7];
  uVar3 = uVar3 ^ uVar3 * 0x800;
  uVar6 = uVar3 >> 8 ^ uVar2 >> 0x13 ^ uVar3 ^ uVar2;
  uVar7 = (ulong)uVar6 * 7 >> 0x20;
  if (7 < (uint)((ulong)uVar6 * 7 >> 0x20)) {
    uVar7 = 0;
  }
  uVar3 = local_44[uVar7];
  local_44[uVar7] = local_44[6];
  _DAT_054e8e4c = CONCAT44(uVar3,uVar1);
  uVar4 = uVar4 ^ uVar4 * 0x800;
  uVar3 = uVar4 >> 8 ^ uVar6 >> 0x13 ^ uVar4 ^ uVar6;
  uVar7 = (ulong)uVar3 * 6 >> 0x20;
  if (7 < (uint)((ulong)uVar3 * 6 >> 0x20)) {
    uVar7 = 0;
  }
  uVar1 = local_44[uVar7];
  local_44[uVar7] = local_44[5];
  uVar5 = uVar5 ^ uVar5 * 0x800;
  uVar4 = uVar5 >> 8 ^ uVar3 >> 0x13 ^ uVar5 ^ uVar3;
  uVar7 = (ulong)uVar4 * 5 >> 0x20;
  if (7 < (uint)((ulong)uVar4 * 5 >> 0x20)) {
    uVar7 = 0;
  }
  uVar5 = local_44[uVar7];
  local_44[uVar7] = local_44[4];
  DAT_054e8e54 = CONCAT44(uVar5,uVar1);
  uVar2 = uVar2 ^ uVar2 << 0xb;
  uVar5 = uVar2 ^ uVar4;
  uVar2 = uVar2 >> 8 ^ uVar4 >> 0x13 ^ uVar5;
  uVar7 = (ulong)(uVar5 >> 0x1e);
  if (7 < (uint)((ulong)uVar2 * 4 >> 0x20)) {
    uVar7 = 0;
  }
  uVar4 = local_44[uVar7];
  local_44[uVar7] = local_44[3];
  uVar6 = uVar6 ^ uVar6 << 0xb;
  uVar6 = uVar6 >> 8 ^ uVar2 >> 0x13 ^ uVar6 ^ uVar2;
  uVar7 = (ulong)uVar6 * 3 >> 0x20;
  if (7 < (uint)((ulong)uVar6 * 3 >> 0x20)) {
    uVar7 = 0;
  }
  uVar2 = local_44[uVar7];
  local_44[uVar7] = local_44[2];
  DAT_054e8e5c = CONCAT44(uVar2,uVar4);
  uVar3 = uVar3 ^ uVar3 << 0xb;
  uVar2 = uVar3 ^ uVar6;
  uVar7 = (ulong)(uVar2 >> 0x1f);
  if (7 < (uint)((ulong)(uVar3 >> 8 ^ uVar6 >> 0x13 ^ uVar2) * 2 >> 0x20)) {
    uVar7 = 0;
  }
  uVar6 = local_44[uVar7];
  local_44[uVar7] = local_44[1];
  DAT_054e8e64 = CONCAT44(local_44[0],uVar6);
  return;
}

