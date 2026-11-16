
undefined8 FUN_028b8e08(long *param_1,long param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  undefined1 uVar6;
  long lVar7;
  char *pcVar8;
  long *plVar9;
  long lVar10;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  puVar5 = PTR_DAT_04bb3350;
  if ((((param_2 != 0) && ((int)param_1[2] == 0)) &&
      ((lVar10 = *(long *)PTR_DAT_04bb3350, lVar10 == 0 ||
       (lVar7 = nn::os::GetTlsValue(*(undefined4 *)(lVar10 + 0x68)),
       *(long *)(lVar10 + 0x60) == lVar7)))) && (DAT_0537d558 != (long *)0x0)) {
    lVar10 = *DAT_0537d558;
    bVar3 = *(byte *)(lVar10 + 0x473);
    pcVar8 = PTR_DAT_04bc1220;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar1 = (uint *)(lVar10 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pcVar8 = (char *)(lVar10 + 0x473);
      }
    }
    if (DAT_05574040 != 0) {
      cVar4 = *pcVar8;
      plVar9 = *(long **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        plVar9 = (long *)*plVar9;
      }
      else {
        if (plVar9 == (long *)0x0) {
          return 0;
        }
        plVar9 = (long *)plVar9[0x26];
        if (plVar9 == (long *)0x0) {
          return 0;
        }
      }
      lVar10 = (**(code **)(*plVar9 + 0x38))();
      if (lVar10 != 0) {
        if (((int)param_1[2] == 0) && (*(long *)puVar5 != 0)) {
          nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
        }
        *param_1 = param_2;
        *(undefined4 *)(param_2 + 4) = 0;
        lVar10 = DAT_05574040;
        *(undefined4 *)(param_2 + 0x44) = 0;
        *(undefined2 *)(param_2 + 8) = 0;
        *(undefined2 *)(param_2 + 0x10) = 0;
        *(undefined4 *)(param_2 + 0xc) = 0;
        *(undefined2 *)(param_2 + 0x18) = 0;
        *(undefined4 *)(param_2 + 0x14) = 0;
        *(undefined2 *)(param_2 + 0x20) = 0;
        *(undefined4 *)(param_2 + 0x1c) = 0;
        *(undefined2 *)(param_2 + 0x28) = 0;
        *(undefined4 *)(param_2 + 0x24) = 0;
        *(undefined2 *)(param_2 + 0x30) = 0;
        *(undefined4 *)(param_2 + 0x2c) = 0;
        *(undefined2 *)(param_2 + 0x38) = 0;
        *(undefined4 *)(param_2 + 0x34) = 0;
        *(undefined2 *)(param_2 + 0x40) = 0;
        *(undefined4 *)(param_2 + 0x3c) = 0;
        if (lVar10 != 0) {
          lVar7 = *param_1;
          plVar9 = *(long **)(lVar10 + 0x10);
          if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
            plVar9 = (long *)*plVar9;
          }
          else if ((plVar9 == (long *)0x0) || (plVar9 = (long *)plVar9[0x26], plVar9 == (long *)0x0)
                  ) goto LAB_028b8fe8;
          lVar10 = (**(code **)(*plVar9 + 0x38))();
          if (lVar10 != 0) {
            puVar2 = (undefined4 *)(lVar7 + 4) + (ulong)(uint)(int)cVar4 * 2;
            if (7 < (uint)(int)cVar4) {
              puVar2 = (undefined4 *)(lVar7 + 4);
            }
            plVar9 = param_1 + 10 + (ulong)*(uint *)*param_1 * 4;
            if (2 < *(uint *)*param_1) {
              plVar9 = param_1 + 10;
            }
            uVar6 = (**(code **)*plVar9)();
            *(undefined1 *)(puVar2 + 1) = uVar6;
            *puVar2 = 0;
            *(undefined1 *)((long)puVar2 + 5) = 1;
          }
        }
LAB_028b8fe8:
        local_48 = 0;
        local_42 = 0;
        local_44 = 0xff00;
        if (-1 < DAT_055b0ed8) {
          FUN_01db1df0(*DAT_0537d558 + 0x480,DAT_055b0ed8,&local_48,*param_1,4,0);
        }
        FUN_03ebb160(param_1 + 1,1);
        return 1;
      }
    }
  }
  return 0;
}

