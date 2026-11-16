
void FUN_027d3418(byte *param_1,long *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*param_1;
  if (((uVar1 < 0x23) && (param_1[1] <= (byte)PTR_DAT_04bc27f0[uVar1])) &&
     (((uint)(&DAT_053e6eb8)[uVar1] >> (ulong)(param_1[1] & 0x1f) & 1) != 0)) {
    FUN_026901a0(param_1,param_2);
  }
  uVar1 = (ulong)param_1[0x13230];
  if (((uVar1 < 0x23) && (param_1[0x13231] <= (byte)PTR_DAT_04bc27f0[uVar1])) &&
     (((uint)(&DAT_053e6eb8)[uVar1] >> (ulong)(param_1[0x13231] & 0x1f) & 1) != 0)) {
    FUN_026901a0(param_1 + 0x13230,param_2);
  }
  uVar1 = (ulong)param_1[0x26460];
  if (((uVar1 < 0x23) && (param_1[0x26461] <= (byte)PTR_DAT_04bc27f0[uVar1])) &&
     (((uint)(&DAT_053e6eb8)[uVar1] >> (ulong)(param_1[0x26461] & 0x1f) & 1) != 0)) {
    FUN_026901a0(param_1 + 0x26460,param_2);
  }
  uVar1 = (ulong)param_1[0x39690];
  if (((uVar1 < 0x23) && (param_1[0x39691] <= (byte)PTR_DAT_04bc27f0[uVar1])) &&
     (((uint)(&DAT_053e6eb8)[uVar1] >> (ulong)(param_1[0x39691] & 0x1f) & 1) != 0)) {
    FUN_026901a0(param_1 + 0x39690,param_2);
  }
  uVar1 = (ulong)param_1[0x4c8c0];
  if (((uVar1 < 0x23) && (param_1[0x4c8c1] <= (byte)PTR_DAT_04bc27f0[uVar1])) &&
     (((uint)(&DAT_053e6eb8)[uVar1] >> (ulong)(param_1[0x4c8c1] & 0x1f) & 1) != 0)) {
    FUN_026901a0(param_1 + 0x4c8c0,param_2);
  }
  uVar1 = (ulong)param_1[0x5faf0];
  if (((uVar1 < 0x23) && (param_1[0x5faf1] <= (byte)PTR_DAT_04bc27f0[uVar1])) &&
     (((uint)(&DAT_053e6eb8)[uVar1] >> (ulong)(param_1[0x5faf1] & 0x1f) & 1) != 0)) {
    FUN_026901a0(param_1 + 0x5faf0,param_2);
  }
  uVar1 = (ulong)param_1[0x72d20];
  if (((uVar1 < 0x23) && (param_1[0x72d21] <= (byte)PTR_DAT_04bc27f0[uVar1])) &&
     (((uint)(&DAT_053e6eb8)[uVar1] >> (ulong)(param_1[0x72d21] & 0x1f) & 1) != 0)) {
    FUN_026901a0(param_1 + 0x72d20,param_2);
  }
  uVar1 = (ulong)param_1[0x85f50];
  if (((uVar1 < 0x23) && (param_1[0x85f51] <= (byte)PTR_DAT_04bc27f0[uVar1])) &&
     (((uint)(&DAT_053e6eb8)[uVar1] >> (ulong)(param_1[0x85f51] & 0x1f) & 1) != 0)) {
    FUN_026901a0(param_1 + 0x85f50,param_2);
  }
  uVar1 = (ulong)param_1[0x99180];
  if (((uVar1 < 0x23) && (param_1[0x99181] <= (byte)PTR_DAT_04bc27f0[uVar1])) &&
     (((uint)(&DAT_053e6eb8)[uVar1] >> (ulong)(param_1[0x99181] & 0x1f) & 1) != 0)) {
    FUN_026901a0(param_1 + 0x99180,param_2);
  }
  uVar1 = (ulong)param_1[0xac3b0];
  if (((uVar1 < 0x23) && (param_1[0xac3b1] <= (byte)PTR_DAT_04bc27f0[uVar1])) &&
     (((uint)(&DAT_053e6eb8)[uVar1] >> (ulong)(param_1[0xac3b1] & 0x1f) & 1) != 0)) {
    FUN_026901a0(param_1 + 0xac3b0,param_2);
  }
  if (*param_2 != 0) {
    param_1[0x1e3363] = 0xff;
    param_1[0x1e3364] = 0xff;
    param_1[0x1e3365] = 0xff;
    param_1[0x1e3366] = 0xff;
  }
  return;
}

