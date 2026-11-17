
void FUN_02a029f0(long param_1,char *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined8 local_88;
  undefined ***local_80;
  undefined **local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  char local_5f;
  undefined **local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined1 local_44;
  
  *(char *)(param_1 + 8) = *param_2;
  if (*param_2 == '\0') {
    return;
  }
  puVar10 = (undefined1 *)(param_1 + 0x1838);
  if ((*(long *)(param_1 + 0x30) != 0) && (*(int *)(param_1 + 0x28) == 1)) {
    FUN_03f459a0(param_1 + 0x20);
  }
  FUN_038386d0(param_1 + 0x10);
  lVar7 = *(long *)(DAT_05354240 + 0x188);
  if (*(char *)(DAT_05354240 + 0x1a0) == '\0') {
    lVar7 = -1;
  }
  if (-1 < lVar7) {
    lVar8 = *(long *)(DAT_05354240 + 0x198);
    lVar9 = *(long *)PTR_DAT_04bb29d0;
    if (*(char *)(DAT_05354240 + 0x1a0) == '\0') {
      lVar8 = -1;
    }
    lVar8 = (long)(lVar9 * (*(long *)(DAT_05aebb88 + 8) + (ulong)*(uint *)(DAT_05aebb88 + 4)) * 5) /
            1000 - lVar8;
    lVar5 = 0;
    if (lVar9 != 0) {
      lVar5 = lVar8 / lVar9;
    }
    lVar6 = 0;
    if (lVar9 != 0) {
      lVar6 = (lVar8 * 1000) / lVar9;
    }
    lVar9 = lVar5 * 1000;
    if (lVar8 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
      lVar9 = lVar6;
    }
    if (-1 < lVar9 + lVar7) goto LAB_02a02b64;
  }
  cVar4 = param_2[1];
  if ((cVar4 != *(char *)(param_1 + 0x1874)) &&
     (uVar1 = (int)cVar4 + ((uint)(cVar4 * -0x77) >> 8),
     ((int)cVar4 + (((int)(uVar1 * 0x1000000) >> 0x1b) + ((uVar1 & 0x80) >> 7)) * -0xf & 0xff) == 0)
     ) {
    FUN_02a02420(param_1);
  }
  *(char *)(param_1 + 0x1874) = cVar4;
LAB_02a02b64:
  nn::os::LockMutex((MutexType *)(param_1 + 0x1818));
  bVar2 = param_2[1];
  if ((bVar2 < 0x3c) && ((byte)param_2[2] < 0x3c)) {
    puVar10 = (undefined1 *)
              (param_1 + (ulong)((uint)bVar2 + (bVar2 / 0xf) * -0xf) * 4 +
               (ulong)(uint)(byte)param_2[2] / 0xf + 0x1838);
  }
  uVar3 = *puVar10;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x1818));
  local_60 = 1;
  local_5f = *param_2;
  local_48 = *(undefined4 *)(param_1 + 0x17b8);
  local_70 = 0;
  local_68 = 0;
  local_88 = 0;
  uStack_50 = *(undefined8 *)(param_1 + 0x17c8);
  local_58 = &PTR_LAB_048f9770;
  local_80 = &local_78;
  local_78 = &PTR_LAB_04a993a8;
  local_44 = uVar3;
  FUN_03838950(param_1 + 0x10,&local_88);
  return;
}

