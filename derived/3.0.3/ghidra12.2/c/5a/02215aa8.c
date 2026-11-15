
void FUN_02215aa8(byte *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  
  bVar1 = *param_1;
  uVar3 = (ulong)bVar1;
  if (((uVar3 < 0x23) && (param_1[1] <= (byte)PTR_DAT_04bc27f0[uVar3])) &&
     (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(param_1[1] & 0x1f) & 1) != 0)) {
    lVar2 = (ulong)(bVar1 >> 5) * 4;
    *(uint *)(param_2 + lVar2) =
         *(uint *)(param_2 + lVar2) & (1 << (ulong)(bVar1 & 0x1f) ^ 0xffffffffU);
  }
  bVar1 = param_1[3];
  uVar3 = (ulong)bVar1;
  if (((uVar3 < 0x23) && (param_1[4] <= (byte)PTR_DAT_04bc27f0[uVar3])) &&
     (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(param_1[4] & 0x1f) & 1) != 0)) {
    lVar2 = (ulong)(bVar1 >> 5) * 4;
    *(uint *)(param_2 + lVar2) =
         *(uint *)(param_2 + lVar2) & (1 << (ulong)(bVar1 & 0x1f) ^ 0xffffffffU);
  }
  bVar1 = param_1[6];
  uVar3 = (ulong)bVar1;
  if (((uVar3 < 0x23) && (param_1[7] <= (byte)PTR_DAT_04bc27f0[uVar3])) &&
     (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(param_1[7] & 0x1f) & 1) != 0)) {
    lVar2 = (ulong)(bVar1 >> 5) * 4;
    *(uint *)(param_2 + lVar2) =
         *(uint *)(param_2 + lVar2) & (1 << (ulong)(bVar1 & 0x1f) ^ 0xffffffffU);
  }
  bVar1 = param_1[9];
  uVar3 = (ulong)bVar1;
  if (((uVar3 < 0x23) && (param_1[10] <= (byte)PTR_DAT_04bc27f0[uVar3])) &&
     (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(param_1[10] & 0x1f) & 1) != 0)) {
    lVar2 = (ulong)(bVar1 >> 5) * 4;
    *(uint *)(param_2 + lVar2) =
         *(uint *)(param_2 + lVar2) & (1 << (ulong)(bVar1 & 0x1f) ^ 0xffffffffU);
  }
  bVar1 = param_1[0xc];
  uVar3 = (ulong)bVar1;
  if (((uVar3 < 0x23) && (param_1[0xd] <= (byte)PTR_DAT_04bc27f0[uVar3])) &&
     (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(param_1[0xd] & 0x1f) & 1) != 0)) {
    lVar2 = (ulong)(bVar1 >> 5) * 4;
    *(uint *)(param_2 + lVar2) =
         *(uint *)(param_2 + lVar2) & (1 << (ulong)(bVar1 & 0x1f) ^ 0xffffffffU);
  }
  bVar1 = param_1[0xf];
  uVar3 = (ulong)bVar1;
  if (((uVar3 < 0x23) && (param_1[0x10] <= (byte)PTR_DAT_04bc27f0[uVar3])) &&
     (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(param_1[0x10] & 0x1f) & 1) != 0)) {
    lVar2 = (ulong)(bVar1 >> 5) * 4;
    *(uint *)(param_2 + lVar2) =
         *(uint *)(param_2 + lVar2) & (1 << (ulong)(bVar1 & 0x1f) ^ 0xffffffffU);
  }
  bVar1 = param_1[0x12];
  uVar3 = (ulong)bVar1;
  if (((uVar3 < 0x23) && (param_1[0x13] <= (byte)PTR_DAT_04bc27f0[uVar3])) &&
     (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(param_1[0x13] & 0x1f) & 1) != 0)) {
    lVar2 = (ulong)(bVar1 >> 5) * 4;
    *(uint *)(param_2 + lVar2) =
         *(uint *)(param_2 + lVar2) & (1 << (ulong)(bVar1 & 0x1f) ^ 0xffffffffU);
  }
  bVar1 = param_1[0x15];
  uVar3 = (ulong)bVar1;
  if (((uVar3 < 0x23) && (param_1[0x16] <= (byte)PTR_DAT_04bc27f0[uVar3])) &&
     (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(param_1[0x16] & 0x1f) & 1) != 0)) {
    lVar2 = (ulong)(bVar1 >> 5) * 4;
    *(uint *)(param_2 + lVar2) =
         *(uint *)(param_2 + lVar2) & (1 << (ulong)(bVar1 & 0x1f) ^ 0xffffffffU);
  }
  bVar1 = param_1[0x18];
  uVar3 = (ulong)bVar1;
  if (((uVar3 < 0x23) && (param_1[0x19] <= (byte)PTR_DAT_04bc27f0[uVar3])) &&
     (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(param_1[0x19] & 0x1f) & 1) != 0)) {
    lVar2 = (ulong)(bVar1 >> 5) * 4;
    *(uint *)(param_2 + lVar2) =
         *(uint *)(param_2 + lVar2) & (1 << (ulong)(bVar1 & 0x1f) ^ 0xffffffffU);
  }
  bVar1 = param_1[0x1b];
  uVar3 = (ulong)bVar1;
  if (((uVar3 < 0x23) && (param_1[0x1c] <= (byte)PTR_DAT_04bc27f0[uVar3])) &&
     (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(param_1[0x1c] & 0x1f) & 1) != 0)) {
    lVar2 = (ulong)(bVar1 >> 5) * 4;
    *(uint *)(param_2 + lVar2) =
         *(uint *)(param_2 + lVar2) & (1 << (ulong)(bVar1 & 0x1f) ^ 0xffffffffU);
  }
  bVar1 = param_1[0x1e];
  uVar3 = (ulong)bVar1;
  if (((uVar3 < 0x23) && (param_1[0x1f] <= (byte)PTR_DAT_04bc27f0[uVar3])) &&
     (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(param_1[0x1f] & 0x1f) & 1) != 0)) {
    lVar2 = (ulong)(bVar1 >> 5) * 4;
    *(uint *)(param_2 + lVar2) =
         *(uint *)(param_2 + lVar2) & (1 << (ulong)(bVar1 & 0x1f) ^ 0xffffffffU);
  }
  bVar1 = param_1[0x21];
  uVar3 = (ulong)bVar1;
  if (((uVar3 < 0x23) && (param_1[0x22] <= (byte)PTR_DAT_04bc27f0[uVar3])) &&
     (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(param_1[0x22] & 0x1f) & 1) != 0)) {
    lVar2 = (ulong)(bVar1 >> 5) * 4;
    *(uint *)(param_2 + lVar2) =
         *(uint *)(param_2 + lVar2) & (1 << (ulong)(bVar1 & 0x1f) ^ 0xffffffffU);
  }
  bVar1 = param_1[0x24];
  uVar3 = (ulong)bVar1;
  if (((uVar3 < 0x23) && (param_1[0x25] <= (byte)PTR_DAT_04bc27f0[uVar3])) &&
     (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(param_1[0x25] & 0x1f) & 1) != 0)) {
    lVar2 = (ulong)(bVar1 >> 5) * 4;
    *(uint *)(param_2 + lVar2) =
         *(uint *)(param_2 + lVar2) & (1 << (ulong)(bVar1 & 0x1f) ^ 0xffffffffU);
  }
  bVar1 = param_1[0x27];
  uVar3 = (ulong)bVar1;
  if (((uVar3 < 0x23) && (param_1[0x28] <= (byte)PTR_DAT_04bc27f0[uVar3])) &&
     (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(param_1[0x28] & 0x1f) & 1) != 0)) {
    lVar2 = (ulong)(bVar1 >> 5) * 4;
    *(uint *)(param_2 + lVar2) =
         *(uint *)(param_2 + lVar2) & (1 << (ulong)(bVar1 & 0x1f) ^ 0xffffffffU);
  }
  bVar1 = param_1[0x2a];
  uVar3 = (ulong)bVar1;
  if (((uVar3 < 0x23) && (param_1[0x2b] <= (byte)PTR_DAT_04bc27f0[uVar3])) &&
     (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(param_1[0x2b] & 0x1f) & 1) != 0)) {
    lVar2 = (ulong)(bVar1 >> 5) * 4;
    *(uint *)(param_2 + lVar2) =
         *(uint *)(param_2 + lVar2) & (1 << (ulong)(bVar1 & 0x1f) ^ 0xffffffffU);
  }
  bVar1 = param_1[0x2d];
  if (((bVar1 < 0x23) && (param_1[0x2e] <= (byte)PTR_DAT_04bc27f0[bVar1])) &&
     (((uint)(&DAT_053e6eb8)[bVar1] >> (ulong)(param_1[0x2e] & 0x1f) & 1) != 0)) {
    uVar3 = (ulong)(bVar1 >> 3) & 0x1c;
    *(uint *)(param_2 + uVar3) =
         *(uint *)(param_2 + uVar3) & (1 << (ulong)(bVar1 & 0x1f) ^ 0xffffffffU);
  }
  return;
}

