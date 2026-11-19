
void FUN_03ab8370(long param_1)

{
  uint *puVar1;
  float *pfVar2;
  ushort *puVar3;
  uint uVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  void *__ptr;
  undefined8 uVar11;
  uint *puVar12;
  long lVar13;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar6 = PTR_DAT_04bb2698;
  uVar4 = *(uint *)(param_1 + 0x520);
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    __ptr = malloc((ulong)uVar4);
  }
  else {
    plVar9 = *(long **)(DAT_05ae92f0 + 8);
    if (plVar9 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar9 = (long *)(lVar13 + 8);
      if (lVar10 != 0) {
        plVar9 = (long *)(lVar10 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        __ptr = (void *)0x0;
        goto LAB_03ab8408;
      }
    }
    __ptr = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,(ulong)uVar4,0x10);
  }
LAB_03ab8408:
  puVar7 = PTR_DAT_04bb2d00;
  lVar13 = 0;
  puVar12 = &DAT_041e0038;
  do {
    bVar8 = lVar13 != 0xc;
    pfVar2 = (float *)(puVar7 + ((ulong)puVar12[-1] & 0x1f) * 0x80);
    puVar3 = (ushort *)((long)__ptr + lVar13 * 2);
    lVar13 = lVar13 + 4;
    *puVar3 = (ushort)(int)((pfVar2[2] + pfVar2[3] * 0.0 + 1.0) * 0.5 * 255.0) |
              (ushort)((int)((*pfVar2 + pfVar2[1] * 0.0 + 1.0) * 0.5 * 255.0) << 8);
    pfVar2 = (float *)(puVar7 + ((ulong)*puVar12 & 0x1f) * 0x80);
    puVar3[1] = (ushort)(int)((pfVar2[2] + pfVar2[3] * 0.0 + 1.0) * 0.5 * 255.0) |
                (ushort)((int)((*pfVar2 + pfVar2[1] * 0.0 + 1.0) * 0.5 * 255.0) << 8);
    puVar1 = puVar12 + 1;
    puVar12 = puVar12 + 4;
    pfVar2 = (float *)(puVar7 + ((ulong)*puVar1 & 0x1f) * 0x80);
    lVar10 = 0;
    if (bVar8) {
      lVar10 = lVar13;
    }
    puVar3[2] = (ushort)(int)((pfVar2[2] + pfVar2[3] * 0.0 + 1.0) * 0.5 * 255.0) |
                (ushort)((int)((*pfVar2 + pfVar2[1] * 0.0 + 1.0) * 0.5 * 255.0) << 8);
    pfVar2 = (float *)(puVar7 + ((ulong)(uint)(&DAT_041e0030)[lVar10] & 0x1f) * 0x80);
    puVar3[3] = (ushort)(int)((pfVar2[2] + pfVar2[3] * 0.0 + 1.0) * 0.5 * 255.0) |
                (ushort)((int)((*pfVar2 + pfVar2[1] * 0.0 + 1.0) * 0.5 * 255.0) << 8);
  } while ((int)lVar13 != 0x10);
  FUN_0390a734(param_1 + 0x4e0,1,10,4,4,1,1,0,0,1);
  local_68 = *(undefined4 *)(param_1 + 0x660);
  uStack_64 = *(undefined4 *)(param_1 + 0x664);
  *(char **)(param_1 + 0x570) = "agl::sdw::SSAO";
  bVar8 = false;
  local_60 = *(undefined8 *)(param_1 + 0x668);
  *(undefined4 *)(param_1 + 0x4e0) = local_68;
  uStack_58 = *(undefined8 *)(param_1 + 0x670);
  *(undefined4 *)(param_1 + 0x4e4) = uStack_64;
  *(undefined8 *)(param_1 + 0x4e8) = local_60;
  *(undefined8 *)(param_1 + 0x4f0) = uStack_58;
  if ((*(byte *)(param_1 + 0x52e) >> 1 & 1) != 0) {
    bVar8 = 0x11 < *(ushort *)(param_1 + 0x578) && *(ushort *)(param_1 + 0x578) - 0x59 < 0xffffffd6;
  }
  uVar11 = FUN_038fd3e0(param_1 + 0x530,&local_68,(undefined8 *)(param_1 + 0x510),0,"agl::sdw::SSAO"
                        ,bVar8,1);
  FUN_038faf2c(uVar11,param_1 + 0x4e0,__ptr,0);
  if (__ptr != (void *)0x0) {
    if (*(long *)puVar6 == 0) {
      free(__ptr);
    }
    else {
      plVar9 = (long *)FUN_038cb610(*(long *)puVar6,__ptr);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x38))(plVar9,__ptr);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x580) = *(undefined4 *)(param_1 + 0x4e0);
  *(undefined8 *)(param_1 + 0x5a8) = *(undefined8 *)(param_1 + 0x508);
  *(undefined4 *)(param_1 + 0x584) = *(undefined4 *)(param_1 + 0x4e4);
  *(undefined8 *)(param_1 + 0x588) = *(undefined8 *)(param_1 + 0x4e8);
  *(undefined8 *)(param_1 + 0x590) = *(undefined8 *)(param_1 + 0x4f0);
  *(undefined4 *)(param_1 + 0x598) = *(undefined4 *)(param_1 + 0x4f8);
  *(undefined4 *)(param_1 + 0x59c) = *(undefined4 *)(param_1 + 0x4fc);
  *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_1 + 0x500);
  *(undefined8 *)(param_1 + 0x5c7) = *(undefined8 *)(param_1 + 0x527);
  *(undefined8 *)(param_1 + 0x5c0) = *(undefined8 *)(param_1 + 0x520);
  *(undefined8 *)(param_1 + 0x5b8) = *(undefined8 *)(param_1 + 0x518);
  *(undefined8 *)(param_1 + 0x5b0) = *(undefined8 *)(param_1 + 0x510);
  FUN_038fd1e0(param_1 + 0x5d0);
  FUN_038fd2f0(param_1 + 0x5d0,param_1 + 0x530);
  *(undefined8 *)(param_1 + 0x610) = *(undefined8 *)(param_1 + 0x570);
  *(undefined4 *)(param_1 + 0x618) = *(undefined4 *)(param_1 + 0x578);
  puVar12 = (uint *)(param_1 + 0x654);
  do {
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar12,0x10);
    if (bVar8) {
      *puVar12 = *puVar12 | 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  *(undefined2 *)(param_1 + 0x644) = 0;
  *(undefined1 *)(param_1 + 0x646) = 0;
  do {
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar12,0x10);
    if (bVar8) {
      *puVar12 = *puVar12 & 0xfffffffb | 4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  *(undefined2 *)(param_1 + 0x647) = 0x101;
  *(undefined1 *)(param_1 + 0x649) = 1;
  do {
    cVar5 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar12,0x10);
    if (bVar8) {
      *puVar12 = *puVar12 & 0xfffffffd | 2;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  return;
}

