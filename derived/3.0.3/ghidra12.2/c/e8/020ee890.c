
void FUN_020ee890(byte *param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint *puVar11;
  int local_38;
  uint local_34;
  
  bVar4 = *param_1;
  uVar10 = (uint)(char)bVar4;
  if (9 < bVar4) {
    return;
  }
  uVar8 = (ulong)uVar10;
  lVar9 = uVar8 * 0xba0;
  if ((&DAT_053fee41)[lVar9] == '\0') {
    return;
  }
  local_34 = uVar10;
  if (param_1[2] == 0) {
    if (((&DAT_053fede8)[uVar8 * 0x174] != 0) &&
       (local_38 = *(int *)((&DAT_053fede8)[uVar8 * 0x174] + 4), local_38 == (char)param_1[1])) {
      FUN_0214eb90(&DAT_053febf8 + lVar9,(int)(char)bVar4,0);
    }
  }
  else {
    iVar2 = (&DAT_053feddc)[uVar8 * 0x2e8];
    if (((iVar2 == (char)param_1[1]) && (iVar2 != 0)) && (iVar2 != 0x22)) {
      *(undefined2 *)(&DAT_053fede0 + lVar9) = 0;
      *(undefined1 *)((long)&DAT_053fede1 + lVar9 + 1) = 0;
      *(undefined8 *)(&DAT_053fedd8 + lVar9) = 0x22001d0005;
    }
  }
  bVar3 = param_1[1];
  if (1 < bVar3 - 5) {
    return;
  }
  lVar9 = *DAT_0537d558;
  bVar5 = *(byte *)(lVar9 + 0x473);
  if ((long)(char)bVar5 == 0xffffffffffffffff) {
LAB_020ee990:
    bVar6 = true;
    if (bVar3 != 6) goto LAB_020eea10;
  }
  else {
    pbVar1 = (byte *)(lVar9 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x80;
    if (7 < bVar5) {
      pbVar1 = (byte *)(lVar9 + 0x48);
    }
    if ((*pbVar1 >> 3 & 1) == 0) goto LAB_020ee990;
    bVar6 = *(byte *)(lVar9 + 0x472) == bVar5;
    if (bVar3 != 6) goto LAB_020eea10;
  }
  local_38 = 0;
  lVar9 = 0xafc;
  if (!bVar6) {
    lVar9 = 0xb00;
  }
  uVar8 = FUN_02b64e40(&local_38,
                       *(undefined4 *)
                        (&DAT_053fe348 + lVar9 + (ulong)(uint)(int)(char)bVar4 * 0xba0));
  if ((((uVar8 & 1) != 0) && (uVar7 = FUN_026641e0(local_38,0), uVar7 < 10)) &&
     ((&DAT_053fee41)[(ulong)uVar7 * 0xba0] != '\0')) {
    FUN_021956e0(&DAT_053fe348 + (ulong)uVar7 * 0xba0);
  }
LAB_020eea10:
  if (bVar6) {
    (&DAT_053fee44)[(ulong)uVar10 * 0x2e8] = 0x244db4da;
    puVar11 = (uint *)&DAT_05453f70;
  }
  else {
    (&DAT_053fee48)[(ulong)uVar10 * 0x2e8] = 0x244db4da;
    puVar11 = &DAT_05453f78;
  }
  local_38 = 1;
  FUN_021dafb0(&local_34,&local_38,0,0,1,0);
  lVar9 = 0;
  if (*puVar11 != local_34) {
    if (puVar11[1] != local_34) {
      return;
    }
    lVar9 = 1;
  }
  puVar11[lVar9] = 0xffffffff;
  return;
}

