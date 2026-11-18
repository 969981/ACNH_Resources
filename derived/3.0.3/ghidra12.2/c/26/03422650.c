
uint FUN_03422650(undefined4 *param_1,byte *param_2)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  byte bVar8;
  uint *puVar9;
  long lVar10;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  iVar4 = FUN_0277d6c4();
  puVar3 = PTR_DAT_04bb43c0;
  if (iVar4 == 0x3333) {
LAB_0342267c:
    bVar8 = *param_2;
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    local_48 = (undefined *)CONCAT71(local_48._1_7_,bVar8);
    uVar6 = FUN_02669430(&local_48);
    if (((uVar6 & 1) == 0) &&
       (((DAT_0537d558 == 0 || (*(long *)(DAT_0537d558 + 0x28) == 0)) ||
        (*(int *)(DAT_0537d558 + 0x80) != 1)))) {
      uVar5 = FUN_0235a840(param_2);
      goto LAB_03422800;
    }
  }
  else {
    local_38 = 0;
    local_48 = PTR_DAT_04bc0510 + 0x10;
    local_40 = *param_1;
    uStack_3c = param_1[1];
    lVar10 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(&local_40);
    if (*(long *)puVar3 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        lVar10 = *(long *)PTR_DAT_04bc0428;
        uVar5 = FUN_0277d6c4(param_1);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar10 + 0x1d8)) &&
           ((puVar7 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar5 * 8),
            puVar7 != (uint *)0x0 && (uVar5 = *puVar7, uVar5 != 0 && puVar7 != (uint *)(ulong)uVar5)
            ))) {
          puVar9 = (uint *)((long)puVar7 - (long)(ulong)uVar5);
          if ((*puVar9 != 0) && ((uVar5 = puVar9[1], uVar5 != 0 && ((ulong)(ushort)puVar9[2] != 0)))
             ) {
            lVar10 = 0xc;
            if (*(char *)((long)puVar9 + 10) != '\0') {
              lVar10 = 0x1c;
            }
            lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
            if (lVar10 != 0) {
              uVar1 = 0;
              if ((ulong)uVar5 != 0) {
                uVar1 = (uint)((ulong)((long)puVar7 - lVar10) / (ulong)uVar5);
              }
              if (*puVar9 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if (((uVar1 < DAT_05326ec0) &&
                  (uVar2 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar2 < 0xbd)) &&
                 (uVar2 == 0x87)) goto LAB_0342267c;
            }
          }
        }
      }
    }
  }
  uVar5 = 1;
LAB_03422800:
  return uVar5 & 1;
}

