
undefined8 FUN_01db0670(long param_1,byte *param_2)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  void *__src;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  undefined4 local_68;
  byte local_64;
  undefined2 local_63;
  byte local_44 [4];
  
  uVar7 = (ulong)DAT_053814a8;
  if (0 < (int)DAT_053814a8) {
    puVar8 = *(undefined4 **)(param_1 + 8);
    uVar13 = 0;
    iVar12 = 0;
    uVar9 = 8;
    puVar10 = puVar8 + 2;
    do {
      if (((uVar13 < (uVar7 & 0xffffffff)) &&
          (plVar11 = *(long **)(DAT_053814b0 + uVar13 * 8), plVar11 != (long *)0x0)) &&
         (uVar7 = (**(code **)(*plVar11 + 0x18))(plVar11), (uVar7 & 1) != 0)) {
        uVar7 = (**(code **)*plVar11)(plVar11);
        if (0x19000 < (ulong)uVar9 + 4 + (uVar7 & 0xffffffff)) break;
        *puVar10 = (int)uVar13;
        __src = (void *)(**(code **)(*plVar11 + 0x10))(plVar11);
        uVar7 = (**(code **)*plVar11)(plVar11);
        memcpy(puVar10 + 1,__src,uVar7 & 0xffffffff);
        uVar7 = (**(code **)*plVar11)(plVar11);
        puVar10 = (undefined4 *)((long)(puVar10 + 1) + (uVar7 & 0xffffffff));
        iVar5 = (**(code **)*plVar11)(plVar11);
        uVar9 = iVar5 + (int)((ulong)uVar9 + 4);
        iVar12 = iVar12 + 1;
      }
      uVar7 = (ulong)(int)DAT_053814a8;
      uVar13 = uVar13 + 1;
    } while ((long)uVar13 < (long)uVar7);
    if (iVar12 != 0) {
      *puVar8 = 0;
      puVar8[1] = iVar12;
      bVar3 = *(byte *)(*DAT_0537d558 + 0x473);
      if ((long)(char)bVar3 == 0xffffffffffffffff) {
        local_64 = 0;
      }
      else {
        puVar1 = (uint *)(*DAT_0537d558 + 0x48);
        puVar2 = puVar1 + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar2 = puVar1;
        }
        local_64 = -((byte)(*puVar2 >> 3) & 1) & 6;
      }
      local_68 = 0;
      local_63 = 0xff;
      lVar6 = FUN_01db0cc0(&local_68);
      bVar3 = *param_2;
      if ((ulong)bVar3 < 8) {
        bVar4 = *(byte *)(*DAT_0537d558 + (ulong)bVar3 * 4 + 0x44e);
        if ((long)(char)bVar4 != 0xffffffffffffffff) {
          puVar1 = (uint *)(*DAT_0537d558 + 0x48);
          puVar2 = puVar1 + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
          if (7 < bVar4) {
            puVar2 = puVar1;
          }
          if (((lVar6 != 0) && ((*puVar2 >> 1 & 1) != 0)) &&
             (local_44[0] = bVar3,
             uVar7 = FUN_01cab2e0(*(undefined8 *)PTR_DAT_04bc10a8,lVar6,puVar8,uVar9,local_44,1),
             (uVar7 & 1) == 0)) {
            return 0xffffffff;
          }
        }
      }
      if (0 < (int)DAT_053814a8) {
        uVar7 = 0;
        uVar9 = DAT_053814a8;
        do {
          if ((uVar7 < uVar9) &&
             (plVar11 = *(long **)(DAT_053814b0 + uVar7 * 8), plVar11 != (long *)0x0)) {
            (**(code **)(*plVar11 + 0x20))();
            uVar9 = DAT_053814a8;
          }
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)uVar9);
      }
      return 1;
    }
  }
  return 0;
}

