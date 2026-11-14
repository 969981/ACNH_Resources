
void FUN_01dba08c(long param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  uint *puVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  byte local_38 [4];
  undefined4 local_34;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x20));
  if (DAT_04c487d4 == -1) {
LAB_01dba104:
    sVar5 = *(short *)PTR_DAT_04bbdeb0;
    if (sVar5 != -1) {
      puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
      if (0xff < (uint)(int)sVar5) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar2 + 4) & 1) != 0) goto LAB_01dba184;
    }
    if ((DAT_055cdb30 != -0x3f5c743d) && (DAT_055cdaf0 != -0x3f5c743d)) {
      plVar1 = (long *)(param_1 + 0x84c8);
      if (*(int *)(param_1 + 0x84f4) == -1) {
        if (DAT_04cd19d8 == 0) {
          pbVar8 = &DAT_0548e140;
LAB_01dba29c:
          if (*pbVar8 < 8) goto LAB_01dba314;
LAB_01dba2a8:
          if (DAT_0537d558 == (long *)0x0) {
LAB_01dba30c:
            pbVar8 = &DAT_0548e168;
            goto LAB_01dba314;
          }
          lVar7 = *DAT_0537d558;
          bVar4 = *(byte *)(lVar7 + 0x473);
          pbVar8 = PTR_DAT_04bb5038;
          if ((long)(char)bVar4 != 0xffffffffffffffff) {
            puVar3 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
            if (7 < bVar4) {
              puVar3 = (uint *)(lVar7 + 0x48);
            }
            if ((*puVar3 & 8) != 0) {
              pbVar8 = (byte *)(lVar7 + 0x471);
            }
          }
          local_38[0] = *pbVar8;
          if (7 < local_38[0]) goto LAB_01dba30c;
        }
        else {
          pbVar8 = PTR_DAT_04bb32e0;
          if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
            pbVar8 = (byte *)(DAT_04cd19d8 + 0x158);
          }
          if (7 < *pbVar8) {
            if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
              pbVar8 = (byte *)(DAT_054f5738 + 0x11a5);
              goto LAB_01dba29c;
            }
            goto LAB_01dba2a8;
          }
LAB_01dba314:
          local_38[0] = *pbVar8;
          if (7 < local_38[0]) {
            local_38[0] = 0xff;
          }
        }
        FUN_01db9f70(param_1,local_38,param_2,1);
        goto LAB_01dba190;
      }
      uVar6 = (uint)DAT_04c487d4;
      if (uVar6 != 0xffffffff) {
        puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar6 * 8);
        if (0xff < uVar6) {
          puVar3 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar3 >> 0xf & 1) != 0) {
          *(undefined4 *)(param_1 + 0x84f8) = 0xc;
          *(undefined1 *)(param_1 + 0x8500) = 1;
          DAT_0537c938 = 0;
          if (param_2 != (long *)0x0) {
            lVar7 = param_2[3];
            *plVar1 = (long)param_2;
            *(char *)(param_1 + 0x84e8) = (char)lVar7;
            *param_2 = (long)plVar1;
            lVar7 = *plVar1;
            *(undefined8 *)(lVar7 + 8) = 0;
            *(undefined8 *)(lVar7 + 0x10) = 0;
          }
          goto LAB_01dba190;
        }
      }
    }
  }
  else {
    local_34 = 0x20;
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) & 1) == 0) goto LAB_01dba104;
  }
LAB_01dba184:
  if (param_2 != (long *)0x0) {
    param_2[1] = 1;
    param_2[2] = 0;
  }
LAB_01dba190:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x20));
  return;
}

