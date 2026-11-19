
void FUN_0390d37c(undefined4 *param_1,ulong param_2)

{
  long lVar1;
  short sVar2;
  uint uVar3;
  undefined *puVar4;
  undefined2 uVar5;
  bool bVar6;
  byte bVar7;
  long lVar8;
  undefined1 auStack_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar4 = PTR_DAT_04bc1010;
  if ((param_2 & 0x3e) != 0) {
    uVar5 = FUN_038fbe40(*(undefined8 *)PTR_DAT_04bc1010,param_1 + 0x2a,
                         *(undefined8 *)(param_1 + 0x28));
    if (*(short *)((long)param_1 + 0xda) != -1) {
      lVar8 = *(long *)puVar4;
      nn::os::LockMutex((MutexType *)(lVar8 + 0x580));
      uVar3 = (int)*(short *)((long)param_1 + 0xda) - (uint)*(ushort *)(lVar8 + 0x5c0);
      if (*(uint *)(lVar8 + 0x5a0) <= uVar3) {
        uVar3 = 0;
      }
      lVar1 = *(long *)(lVar8 + 0x5a8) + (long)(int)uVar3 * 0x80;
      sVar2 = *(short *)(lVar1 + 0x76) + -1;
      *(short *)(lVar1 + 0x76) = sVar2;
      if (sVar2 == 0) {
        *(short *)(lVar8 + 0x5c4) = *(short *)(lVar8 + 0x5c4) + -1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x580));
    }
    *(undefined2 *)((long)param_1 + 0xda) = uVar5;
  }
  if ((param_2 & 1) != 0) {
    if ((*(byte *)(param_1 + 0x36) >> 1 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x36) >> 6 & 1) == 0) {
        return;
      }
      if ((*(byte *)((long)param_1 + 0x4e) >> 1 & 1) == 0) {
        bVar6 = false;
      }
      else {
        bVar6 = 0x11 < *(ushort *)(param_1 + 0x26) &&
                *(ushort *)(param_1 + 0x26) - 0x59 < 0xffffffd6;
      }
      local_58 = *param_1;
      uStack_54 = param_1[1];
      local_50 = *(undefined8 *)(param_1 + 2);
      uStack_48 = *(undefined8 *)(param_1 + 4);
      FUN_038fd3e0(param_1 + 0x14,&local_58,param_1 + 0xc,0,*(undefined8 *)(param_1 + 0x24),bVar6,0)
      ;
      bVar7 = *(byte *)(param_1 + 0x36) & 0xbf;
    }
    else {
      (**(code **)PTR_DAT_04bcf220)(auStack_68);
      (**(code **)PTR_DAT_04bcf828)
                (auStack_68,*(undefined1 *)(param_1 + 0x34),*(undefined1 *)((long)param_1 + 0xd1),
                 *(undefined1 *)((long)param_1 + 0xd2),*(undefined1 *)((long)param_1 + 0xd3));
      if ((*(byte *)((long)param_1 + 0x4e) >> 1 & 1) == 0) {
        bVar6 = false;
      }
      else {
        bVar6 = 0x11 < *(ushort *)(param_1 + 0x26) &&
                *(ushort *)(param_1 + 0x26) - 0x59 < 0xffffffd6;
      }
      local_58 = *param_1;
      uStack_54 = param_1[1];
      local_50 = *(undefined8 *)(param_1 + 2);
      uStack_48 = *(undefined8 *)(param_1 + 4);
      FUN_038fd3e0(param_1 + 0x14,&local_58,param_1 + 0xc,auStack_68,*(undefined8 *)(param_1 + 0x24)
                   ,bVar6,0);
      bVar7 = *(byte *)(param_1 + 0x36) | 0x40;
    }
    *(byte *)(param_1 + 0x36) = bVar7;
  }
  return;
}

