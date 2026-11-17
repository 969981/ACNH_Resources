
void FUN_02c6f440(float param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  float fVar12;
  undefined *local_80;
  undefined4 local_78;
  
  puVar5 = PTR_DAT_04bc4d98;
  puVar4 = PTR_DAT_04bc4d90;
  if (*(long *)(param_2 + 0x210) != 0) {
    lVar11 = *(long *)(*(long *)(param_2 + 0x210) + 0x5b8);
    if (lVar11 != 0) {
      if (*(int *)(lVar11 + 0x208) < 1) {
        puVar9 = (undefined8 *)0x0;
      }
      else {
        puVar9 = (undefined8 *)**(undefined8 **)(lVar11 + 0x210);
      }
      if (((*PTR_DAT_04bc4d98 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc4d98), iVar6 != 0)) {
        *(undefined **)puVar4 = PTR_DAT_04bc4da0 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4d98);
      }
      fVar12 = 0.0;
      if (puVar9 != (undefined8 *)0x0) {
        uVar7 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc4d90);
        fVar12 = 0.0;
        if (((uVar7 & 1) != 0) &&
           (plVar10 = *(long **)(puVar9[0x5e] + (ulong)(2 < *(uint *)(puVar9 + 0x5d)) * 0x10),
           plVar10 != (long *)0x0)) {
          local_80 = PTR_DAT_04bc4f00 + 0x10;
          local_78 = 9;
          (**(code **)(*plVar10 + 0x20))(plVar10,&local_80);
          fVar12 = (float)(**(code **)(plVar10[3] + 0xb0))(plVar10[1]);
        }
      }
      uVar3 = *(uint *)(lVar11 + 0x2f8);
      if (fVar12 < param_1) {
        param_1 = 0.0;
      }
      if (0 < (int)uVar3) {
        uVar7 = 0;
        puVar1 = PTR_DAT_04bc4da0 + 0x10;
        puVar2 = PTR_DAT_04bc4f00 + 0x10;
        do {
          if ((long)uVar7 < (long)(int)*(uint *)(lVar11 + 0x208) &&
              uVar7 < *(uint *)(lVar11 + 0x208)) {
            puVar9 = *(undefined8 **)(*(long *)(lVar11 + 0x210) + uVar7 * 8);
          }
          else {
            puVar9 = (undefined8 *)0x0;
          }
          if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar5), iVar6 != 0)) {
            *(undefined **)puVar4 = puVar1;
            __cxa_guard_release(puVar5);
          }
          if (((puVar9 != (undefined8 *)0x0) &&
              (uVar8 = (**(code **)*puVar9)(puVar9,puVar4), (uVar8 & 1) != 0)) &&
             (plVar10 = *(long **)(puVar9[0x5e] + (ulong)(2 < *(uint *)(puVar9 + 0x5d)) * 0x10),
             plVar10 != (long *)0x0)) {
            local_78 = 0x14;
            local_80 = puVar2;
            (**(code **)(*plVar10 + 0x18))(plVar10,&local_80);
            (**(code **)(plVar10[3] + 0x158))(param_1,plVar10[1]);
          }
          uVar7 = uVar7 + 1;
        } while (uVar3 != uVar7);
      }
      *(float *)(param_2 + 0x97da0) = param_1;
    }
  }
  return;
}

