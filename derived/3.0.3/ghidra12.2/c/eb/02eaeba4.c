
void FUN_02eaeba4(long param_1,byte *param_2,void *param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  char cVar6;
  char *pcVar7;
  uint uVar8;
  byte bVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  
  *(undefined4 *)(param_1 + 0x1360) = 6;
  bVar9 = *param_2;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  *(byte *)(param_1 + 0x1368) = bVar9;
  plVar13 = *(long **)PTR_DAT_04bb27d0;
  pcVar7 = (char *)FUN_02582a24(param_2,1);
  lVar10 = *plVar13;
  cVar6 = *pcVar7;
  uVar8 = (uint)cVar6;
  bVar9 = *(byte *)(lVar10 + 0x473);
  if ((long)(char)bVar9 == 0xffffffffffffffff) {
    if (DAT_0537bdbc != cVar6) {
LAB_02eaecbc:
      uVar11 = 0;
      goto LAB_02eaecc0;
    }
  }
  else {
    puVar1 = (uint *)(lVar10 + 0x48);
    puVar2 = puVar1 + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
    if (7 < bVar9) {
      puVar2 = puVar1;
    }
    pcVar7 = &DAT_0537bdbc;
    if ((*puVar2 & 8) != 0) {
      pcVar7 = (char *)(lVar10 + 0x473);
    }
    if (*pcVar7 != cVar6) {
      uVar11 = 0;
      if (((*puVar2 >> 3 & 1) == 0) || (uVar8 == 0xffffffff)) goto LAB_02eaecc0;
      puVar2 = puVar1 + (ulong)uVar8 * 0x20;
      if (7 < uVar8) {
        puVar2 = puVar1;
      }
      if (((byte)*puVar2 >> 3 & 1) == 0) goto LAB_02eaecbc;
    }
  }
  lVar10 = *(long *)PTR_DAT_04bbaed0 + 0xd8 + (ulong)uVar8 * 0x30;
  if (7 < uVar8) {
    lVar10 = *(long *)PTR_DAT_04bbaed0 + 0xd8;
  }
  uVar11 = *(undefined8 *)(lVar10 + 8);
LAB_02eaecc0:
  *(undefined8 *)(param_1 + 0x1378) = uVar11;
  memcpy((void *)(param_1 + 0x9680),param_3,0x23014);
  uVar11 = *(undefined8 *)((long)param_3 + 0x23028);
  uVar12 = *(undefined8 *)((long)param_3 + 0x23030);
  uVar4 = *(undefined1 *)((long)param_3 + 0x23038);
  *(undefined8 *)(param_1 + 0x2c6a0) = *(undefined8 *)((long)param_3 + 0x23020);
  *(undefined1 *)(param_1 + 0x2c6b8) = uVar4;
  *(undefined8 *)(param_1 + 0x2c6a8) = uVar11;
  *(undefined8 *)(param_1 + 0x2c6b0) = uVar12;
  uVar11 = *(undefined8 *)((long)param_3 + 0x23044);
  uVar12 = *(undefined8 *)((long)param_3 + 0x2304c);
  *(undefined8 *)(param_1 + 0x2c6bc) = *(undefined8 *)((long)param_3 + 0x2303c);
  *(undefined8 *)(param_1 + 0x2c6cc) = uVar12;
  *(undefined8 *)(param_1 + 0x2c6c4) = uVar11;
  uVar8 = *(uint *)((long)param_3 + 0x23054);
  if (1 < uVar8) {
    uVar8 = 0;
  }
  *(uint *)(param_1 + 0x2c6d4) = uVar8;
  *(undefined2 *)(param_1 + 0x2c6d8) = *(undefined2 *)((long)param_3 + 0x23058);
  *(undefined2 *)(param_1 + 0x2c6dc) = *(undefined2 *)((long)param_3 + 0x2305c);
  *(undefined1 *)(param_1 + 0x2c6de) = *(undefined1 *)((long)param_3 + 0x2305e);
  *(undefined1 *)(param_1 + 0x2c6df) = *(undefined1 *)((long)param_3 + 0x2305f);
  *(undefined4 *)(param_1 + 0x2c6e0) = *(undefined4 *)((long)param_3 + 0x23060);
  uVar5 = *(undefined2 *)((long)param_3 + 0x230ac);
  uVar11 = *(undefined8 *)((long)param_3 + 0x2309c);
  uVar12 = *(undefined8 *)((long)param_3 + 0x230a4);
  *(undefined8 *)(param_1 + 0x2c714) = *(undefined8 *)((long)param_3 + 0x23094);
  *(undefined8 *)(param_1 + 0x2c71c) = uVar11;
  *(undefined8 *)(param_1 + 0x2c724) = uVar12;
  *(undefined2 *)(param_1 + 0x2c72c) = uVar5;
  uVar11 = *(undefined8 *)((long)param_3 + 0x2306c);
  *(undefined8 *)(param_1 + 0x2c6e4) = *(undefined8 *)((long)param_3 + 0x23064);
  *(undefined8 *)(param_1 + 0x2c6ec) = uVar11;
  uVar12 = *(undefined8 *)((long)param_3 + 0x2308c);
  uVar11 = *(undefined8 *)((long)param_3 + 0x23074);
  uVar3 = *(undefined8 *)((long)param_3 + 0x2307c);
  *(undefined8 *)(param_1 + 0x2c704) = *(undefined8 *)((long)param_3 + 0x23084);
  *(undefined8 *)(param_1 + 0x2c70c) = uVar12;
  *(undefined8 *)(param_1 + 0x2c6f4) = uVar11;
  *(undefined8 *)(param_1 + 0x2c6fc) = uVar3;
  FUN_02eba0b4(param_1 + 0x2c72e,(long)param_3 + 0x230ae);
  memcpy((void *)(param_1 + 0x2c74c),(void *)((long)param_3 + 0x230cc),0x3fc);
  return;
}

