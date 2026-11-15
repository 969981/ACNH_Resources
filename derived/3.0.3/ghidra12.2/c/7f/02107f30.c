
void FUN_02107f30(undefined8 *param_1)

{
  ushort uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined **local_70;
  undefined1 *local_68;
  undefined4 local_60;
  undefined1 local_5c [31];
  undefined1 local_3d;
  undefined8 local_38;
  
  local_38 = 0xfffe;
  FUN_0277d4ac(&local_38);
  local_3d = 0;
  uVar5 = *param_1;
  local_60 = 0x20;
  local_68 = local_5c;
  local_38 = uVar5;
  if (local_5c != (undefined1 *)((long)param_1 + 10)) {
    lVar3 = 0;
    do {
      if (*(char *)((long)param_1 + lVar3 + 10) == '\0') {
LAB_02107fc4:
        iVar2 = (int)lVar3;
joined_r0x02107fc8:
        if (0x1f < iVar2) {
          iVar2 = 0x1f;
        }
        goto LAB_02107fd0;
      }
      if (*(char *)((long)param_1 + lVar3 + 0xb) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_02107fc4;
      }
      if (*(char *)((long)param_1 + lVar3 + 0xc) == '\0') {
        iVar2 = (int)lVar3 + 2;
        goto joined_r0x02107fc8;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    iVar2 = 0;
LAB_02107fd0:
    memcpy(local_5c,(undefined1 *)((long)param_1 + 10),(long)iVar2);
    local_5c[iVar2] = 0;
  }
  uVar1 = *(ushort *)(param_1 + 1);
  local_70 = &PTR_LAB_048f9700;
  if ((long)(short)uVar1 < 0) {
    if (*(char *)((long)param_1 + 0x14) == '\0') {
      FUN_02189da0(*(undefined8 *)PTR_DAT_04bb46e8,&local_70,&local_38);
    }
    else {
      FUN_0218a1d0();
    }
  }
  else if (((uVar1 < 10) && (*(char *)((long)param_1 + 0x14) == '\0')) &&
          (uVar4 = (long)(short)uVar1 & 0xffffffff, (&DAT_053fee41)[uVar4 * 0xba0] != '\0')) {
    (&DAT_053fe842)[uVar4 * 0xba0] = (char)((ulong)uVar5 >> 0x10);
    (&DAT_053fe840)[uVar4 * 0x5d0] = (short)uVar5;
    (&DAT_053fe843)[uVar4 * 0xba0] = (char)((ulong)uVar5 >> 0x18);
    (&DAT_053fe844)[uVar4 * 0x2e8] = (int)((ulong)uVar5 >> 0x20);
  }
  return;
}

