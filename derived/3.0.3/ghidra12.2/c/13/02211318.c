
void FUN_02211318(byte *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  puVar3 = PTR_DAT_04bc27f0;
  uVar4 = (ulong)*param_1;
  if (((uVar4 < 0x23) && (bVar1 = param_1[1], bVar1 <= (byte)PTR_DAT_04bc27f0[uVar4])) &&
     (uVar2 = 1 << (ulong)(bVar1 & 0x1f), ((&DAT_053e6eb8)[uVar4] & uVar2) != 0 && bVar1 < 0x20)) {
    *(uint *)(param_2 + uVar4 * 4) = *(uint *)(param_2 + uVar4 * 4) & (uVar2 ^ 0xffffffff);
  }
  uVar4 = (ulong)param_1[3];
  if (((uVar4 < 0x23) && (bVar1 = param_1[4], bVar1 <= (byte)puVar3[uVar4])) &&
     (uVar2 = 1 << (ulong)(bVar1 & 0x1f), ((&DAT_053e6eb8)[uVar4] & uVar2) != 0 && bVar1 < 0x20)) {
    *(uint *)(param_2 + uVar4 * 4) = *(uint *)(param_2 + uVar4 * 4) & (uVar2 ^ 0xffffffff);
  }
  uVar4 = (ulong)param_1[6];
  if ((uVar4 < 0x23) && (bVar1 = param_1[7], bVar1 <= (byte)puVar3[uVar4])) {
    uVar2 = 1 << (ulong)(bVar1 & 0x1f);
    if ((((&DAT_053e6eb8)[uVar4] & uVar2) != 0) && (bVar1 < 0x20)) {
      *(uint *)(param_2 + uVar4 * 4) = *(uint *)(param_2 + uVar4 * 4) & (uVar2 ^ 0xffffffff);
    }
  }
  uVar4 = (ulong)param_1[9];
  if ((uVar4 < 0x23) && (bVar1 = param_1[10], bVar1 <= (byte)puVar3[uVar4])) {
    uVar2 = 1 << (ulong)(bVar1 & 0x1f);
    if ((((&DAT_053e6eb8)[uVar4] & uVar2) != 0) && (bVar1 < 0x20)) {
      *(uint *)(param_2 + uVar4 * 4) = *(uint *)(param_2 + uVar4 * 4) & (uVar2 ^ 0xffffffff);
    }
  }
  uVar4 = (ulong)param_1[0xc];
  if ((uVar4 < 0x23) && (bVar1 = param_1[0xd], bVar1 <= (byte)puVar3[uVar4])) {
    uVar2 = 1 << (ulong)(bVar1 & 0x1f);
    if ((((&DAT_053e6eb8)[uVar4] & uVar2) != 0) && (bVar1 < 0x20)) {
      *(uint *)(param_2 + uVar4 * 4) = *(uint *)(param_2 + uVar4 * 4) & (uVar2 ^ 0xffffffff);
    }
  }
  uVar4 = (ulong)param_1[0xf];
  if ((uVar4 < 0x23) && (bVar1 = param_1[0x10], bVar1 <= (byte)puVar3[uVar4])) {
    uVar2 = 1 << (ulong)(bVar1 & 0x1f);
    if ((((&DAT_053e6eb8)[uVar4] & uVar2) != 0) && (bVar1 < 0x20)) {
      *(uint *)(param_2 + uVar4 * 4) = *(uint *)(param_2 + uVar4 * 4) & (uVar2 ^ 0xffffffff);
    }
  }
  uVar4 = (ulong)param_1[0x12];
  if ((uVar4 < 0x23) && (bVar1 = param_1[0x13], bVar1 <= (byte)puVar3[uVar4])) {
    uVar2 = 1 << (ulong)(bVar1 & 0x1f);
    if ((((&DAT_053e6eb8)[uVar4] & uVar2) != 0) && (bVar1 < 0x20)) {
      *(uint *)(param_2 + uVar4 * 4) = *(uint *)(param_2 + uVar4 * 4) & (uVar2 ^ 0xffffffff);
    }
  }
  uVar4 = (ulong)param_1[0x15];
  if ((uVar4 < 0x23) && (bVar1 = param_1[0x16], bVar1 <= (byte)puVar3[uVar4])) {
    uVar2 = 1 << (ulong)(bVar1 & 0x1f);
    if ((((&DAT_053e6eb8)[uVar4] & uVar2) != 0) && (bVar1 < 0x20)) {
      *(uint *)(param_2 + uVar4 * 4) = *(uint *)(param_2 + uVar4 * 4) & (uVar2 ^ 0xffffffff);
    }
  }
  uVar4 = (ulong)param_1[0x18];
  if ((uVar4 < 0x23) && (bVar1 = param_1[0x19], bVar1 <= (byte)puVar3[uVar4])) {
    uVar2 = 1 << (ulong)(bVar1 & 0x1f);
    if ((((&DAT_053e6eb8)[uVar4] & uVar2) != 0) && (bVar1 < 0x20)) {
      *(uint *)(param_2 + uVar4 * 4) = *(uint *)(param_2 + uVar4 * 4) & (uVar2 ^ 0xffffffff);
    }
  }
  uVar4 = (ulong)param_1[0x1b];
  if ((uVar4 < 0x23) && (bVar1 = param_1[0x1c], bVar1 <= (byte)puVar3[uVar4])) {
    uVar2 = 1 << (ulong)(bVar1 & 0x1f);
    if ((((&DAT_053e6eb8)[uVar4] & uVar2) != 0) && (bVar1 < 0x20)) {
      *(uint *)(param_2 + uVar4 * 4) = *(uint *)(param_2 + uVar4 * 4) & (uVar2 ^ 0xffffffff);
    }
  }
  uVar4 = (ulong)param_1[0x1e];
  if ((uVar4 < 0x23) && (bVar1 = param_1[0x1f], bVar1 <= (byte)puVar3[uVar4])) {
    uVar2 = 1 << (ulong)(bVar1 & 0x1f);
    if ((((&DAT_053e6eb8)[uVar4] & uVar2) != 0) && (bVar1 < 0x20)) {
      *(uint *)(param_2 + uVar4 * 4) = *(uint *)(param_2 + uVar4 * 4) & (uVar2 ^ 0xffffffff);
    }
  }
  uVar4 = (ulong)param_1[0x21];
  if ((uVar4 < 0x23) && (bVar1 = param_1[0x22], bVar1 <= (byte)puVar3[uVar4])) {
    uVar2 = 1 << (ulong)(bVar1 & 0x1f);
    if ((((&DAT_053e6eb8)[uVar4] & uVar2) != 0) && (bVar1 < 0x20)) {
      *(uint *)(param_2 + uVar4 * 4) = *(uint *)(param_2 + uVar4 * 4) & (uVar2 ^ 0xffffffff);
    }
  }
  uVar4 = (ulong)param_1[0x24];
  if ((uVar4 < 0x23) && (bVar1 = param_1[0x25], bVar1 <= (byte)puVar3[uVar4])) {
    uVar2 = 1 << (ulong)(bVar1 & 0x1f);
    if ((((&DAT_053e6eb8)[uVar4] & uVar2) != 0) && (bVar1 < 0x20)) {
      *(uint *)(param_2 + uVar4 * 4) = *(uint *)(param_2 + uVar4 * 4) & (uVar2 ^ 0xffffffff);
    }
  }
  uVar4 = (ulong)param_1[0x27];
  if ((uVar4 < 0x23) && (bVar1 = param_1[0x28], bVar1 <= (byte)puVar3[uVar4])) {
    uVar2 = 1 << (ulong)(bVar1 & 0x1f);
    if ((((&DAT_053e6eb8)[uVar4] & uVar2) != 0) && (bVar1 < 0x20)) {
      *(uint *)(param_2 + uVar4 * 4) = *(uint *)(param_2 + uVar4 * 4) & (uVar2 ^ 0xffffffff);
    }
  }
  uVar4 = (ulong)param_1[0x2a];
  if ((uVar4 < 0x23) && (bVar1 = param_1[0x2b], bVar1 <= (byte)puVar3[uVar4])) {
    uVar2 = 1 << (ulong)(bVar1 & 0x1f);
    if ((((&DAT_053e6eb8)[uVar4] & uVar2) != 0) && (bVar1 < 0x20)) {
      *(uint *)(param_2 + uVar4 * 4) = *(uint *)(param_2 + uVar4 * 4) & (uVar2 ^ 0xffffffff);
    }
  }
  uVar4 = (ulong)param_1[0x2d];
  if ((uVar4 < 0x23) && (bVar1 = param_1[0x2e], bVar1 <= (byte)puVar3[uVar4])) {
    uVar2 = 1 << (ulong)(bVar1 & 0x1f);
    if ((((&DAT_053e6eb8)[uVar4] & uVar2) != 0) && (bVar1 < 0x20)) {
      *(uint *)(param_2 + uVar4 * 4) = *(uint *)(param_2 + uVar4 * 4) & (uVar2 ^ 0xffffffff);
    }
  }
  return;
}

