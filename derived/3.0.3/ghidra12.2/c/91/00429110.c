
ulong FUN_00429110(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong *local_70;
  ulong uStack_68;
  
  uVar6 = FUN_00446800(*param_1);
  lVar9 = param_1[1];
  if ((lVar9 == 0) || (uVar7 = (ulong)*(ushort *)(lVar9 + 8), uVar7 == 0)) {
    return uVar6;
  }
  uVar10 = 0;
LAB_00429170:
  while( true ) {
    plVar1 = (long *)(lVar9 + 0x10 + uVar10 * 0x10);
    uVar2 = (uint)*(byte *)plVar1[1] * -0x61c8864f;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    uVar2 = (uint)uVar6 * 0x40 + -0x61c88647 + uVar2 + (uVar2 >> 2) ^ (uint)uVar6;
    if (*(byte *)plVar1[1] == 0x74) break;
    uVar5 = (int)*plVar1 * -0x61c8864f;
    uVar3 = *(int *)((long)plVar1 + 4) * -0x61c8864f;
    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    uVar4 = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar5 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    uVar5 = uVar4 + 0x9e3779b9 + (uVar4 >> 2) + uVar5 * 0x40 ^ uVar5;
    uVar10 = uVar10 + 1;
    uVar6 = (ulong)(uVar2 * 0x40 + -0x61c88647 + uVar5 + (uVar5 >> 2) ^ uVar2);
    if (uVar7 <= uVar10) {
      return uVar6;
    }
  }
  puVar8 = (ulong *)*plVar1;
  local_70 = puVar8;
  do {
    uVar5 = (uint)*local_70;
    if ((uVar5 >> 3 & 1) != 0) {
      if (local_70 != (ulong *)0x0) {
        uVar5 = (uVar5 & 7) - (uVar5 >> 1 & 1);
        uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
        local_70 = (ulong *)local_70[(ulong)((uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18)
                                     + 2];
        uVar6 = *puVar8;
        uVar5 = (uint)uVar6;
        if ((uVar5 >> 0xf & 1) == 0) goto LAB_0042924c;
        goto LAB_00429260;
      }
      break;
    }
    if ((*local_70 & 1) != 0) {
      local_70 = (ulong *)0x0;
      break;
    }
    local_70 = (ulong *)local_70[1];
  } while (local_70 != (ulong *)0x0);
  do {
    uVar6 = *puVar8;
    uVar5 = (uint)uVar6;
    if ((uVar5 >> 0xf & 1) != 0) goto LAB_00429260;
LAB_0042924c:
    if ((uVar6 & 9) != 0) {
      uStack_68 = 0;
      goto LAB_0042929c;
    }
    puVar8 = (ulong *)puVar8[1];
  } while (puVar8 != (ulong *)0x0);
  uStack_68 = 0;
  goto LAB_0042929c;
LAB_00429260:
  uVar5 = (uVar5 & 0x7fff) - (uVar5 >> 1 & 0x1555);
  uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
  uStack_68 = puVar8[(ulong)((uVar5 + (uVar5 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2];
LAB_0042929c:
  uVar5 = FUN_00429110(&local_70);
  uVar7 = (ulong)*(ushort *)(lVar9 + 8);
  uVar10 = uVar10 + 1;
  uVar6 = (ulong)(uVar2 * 0x40 + -0x61c88647 + uVar5 + (uVar5 >> 2) ^ uVar2);
  if (*(ushort *)(lVar9 + 8) <= uVar10) {
    return uVar6;
  }
  goto LAB_00429170;
}

